#include <iostream>
#include <vector>

using namespace std;

int s[]={0,1,2,3,3,5,5,6,8,8,12};
int f[]={6,4,13,5,8,7,9,10,11,12,14};
int a[11]={0};

int resultado(){

for (int i = 0; i < 11; i++)
{
    for (int j = 0; j < i; j++)
    {
        if (f[j] < s[i] && a[i] < a[j])
        {
            a[i] = a[j];
        }
        
    }

    a[i]++;
    
}

return a[10];

}
int main(){
    cout << resultado() << endl;

}




