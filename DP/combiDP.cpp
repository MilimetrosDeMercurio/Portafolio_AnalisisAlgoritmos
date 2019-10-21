#include <iostream>

using namespace std;


int comb(int n, int m){
    if(m==0) return 1;
    else if (n==m)return 1;
    else{
        return comb(n-1,m)+comb(n-1,m-1);
    }
}

int main(){
    int m=3;
    int n=5;

    int c[n+1][m+1];
    for(int i=1;i<=n;i++){
        c[0][i]=1;

    }
    for(int i=0;i<=m;i++){
        c[i][0]=i;
    }
    
     for(int i=1;i<=n;i++){
        c[1][i]=i;
    }
    c[1][1]=1;
    c[2][2]=1;
    c[3][3]=1;
 
for(int i=2;i<=m;i++){
    for(int j=i+1;j<=n;j++){
       c[i][j]=c[i-1][j-1]+c[i][j-1];
       cout<<"pos: ";
       cout<<i;
       cout<<",";
       cout<<j<<endl;
       cout<<c[i][j]<<endl;
    }
}

    return 0;
}