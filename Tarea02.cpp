#include <iostream>

using namespace std;
struct nodo
{
    int valor;
    nodo *sig;
} typedef nodo;

class Pila
{
public:
    nodo *inicio;

    nodo *crearnodo(int valor)
    {
        nodo *n = new nodo;
        n->valor = valor;
        n->sig = nullptr;
        return n;
    }
    void push(nodo *n)
    {
        n->sig = inicio;
        inicio = n;
    }

    nodo *pop()
    {
        nodo *n = inicio;
        inicio = n->sig;
        return n;
    }

    void mostrar()
    {
        nodo *temp = inicio;
        if (!inicio)
        {
            cout << "esta vacia";
        }
        else
        {
            while (temp)
            {
                cout << temp->valor << " ";
                temp = temp->sig;
            }
            cout << endl;
        }
    }

    Pila()
    {
        inicio = nullptr;
    }
};

int main()
{
    Pila pila1;
    pila1.push(pila1.crearnodo(3));
    pila1.push(pila1.crearnodo(3));
    pila1.push(pila1.crearnodo(3));
    pila1.push(pila1.crearnodo(3));
    pila1.push(pila1.crearnodo(3));
    pila1.push(pila1.crearnodo(3));
    pila1.mostrar();

    Pila pila2;

    while (pila1.inicio != nullptr)
    {
        pila2.push(pila1.pop());
    }

    pila2.mostrar();

    return 0;
}