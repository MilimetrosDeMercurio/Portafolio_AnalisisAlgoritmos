#include <iostream>
#include <sstream>
#include <string>
#define NUM 3;

using namespace std;

void fastestway(int a[2][3],int t[2][2],int e1,int e2,int x1,int x2,int n){
string r1="e1";
string r2="e2";
int f1[n],f2[n];
int f=0;
f1[0] = e1 + a[0][0];
f2[0] = e2 + a[1][0];
    for (int j=1;j<n;j++){
        
        
        if (f1[j -1] + a[0][j] <= f2[j -1] + t[1][j-1] + a[0][j]){
            f1[j] = f1[j -1] + a[0][j];
        stringstream ss;
        ss << j;
        string str = ss.str();
        r1=r1+",a1"+str;
        }else {
            f1[j] = f2[j -1] + t[1][j-1] + a[0][j];
                    stringstream ss;
        ss << j-1;
        string str = ss.str();
        r1=r1+",a2"+str+",t2"+str;
        }
        
        
        if (f2[j -1] + a[1][j] <= f1[j -1] + t[0][j-1] + a[1][j]){
            f2[j] = f2[j -1] + a[1][j];
                stringstream ss;
        ss << j;
        string str = ss.str();
        r2=r2+",a2"+str;
        }else {
            f2[j] = f1[j -1] + t[0][j-1] + a[1][j];
                            stringstream ss;
        ss << j-1;
        string str = ss.str();
        r2=r2+",a1"+str+",t1"+str;
            
        }
        
        
    }
        if (f1[n-1] + x1 <=f2[n-1] + x2){
            f = f1[n-1] + x1;
            r1=r1+",a13";
            cout<<"respuesta 1: "+r1<<endl;
            cout<< f;
            }else {
                f = f2[n-1] + x2;  
                    r2=r2+",a23";
            cout<<"respuesta 2: "+r2;
            }
    

    

}

int main()
{
    int a[2][3]={{3,2,4},{4,2,3}};
     
   
    int t[2][2];
        t[0][0]=3;
        t[0][1]=3;
       
       t[1][0]=2;
       t[1][1]=4;
        fastestway(a,t,1,2,2,3,3);
       
 

    return 0;
}