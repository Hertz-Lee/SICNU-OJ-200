#include<iostream>
using namespace std;
int a[82][82];
int f(int k,int N){
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
            cin>>a[i][j];
    if(N>9)return 0;
    for(int i=1;i<=N;i++)
        for(int j=1,b1[10]={},b2[10]={};j<=N;j++)
            if(b1[a[i][j]]==1||b2[a[j][i]]==1)return 0;
            else{b1[a[i][j]]=1;b2[a[j][i]]=1;}
    for(int fi=1;fi<=k;fi++)
        for(int fj=1;fj<=k;fj++)
            for(int i=1,b[10]={};i<=k;i++)
                for(int j=1;j<=k;j++)
                    if(b[a[(fi-1)*k+i][(fj-1)*k+j]]==1)return 0;
                    else b[a[(fi-1)*k+i][(fj-1)*k+j]]=1;
    return 1;
}
int main(){
    int n,k;
    cin>>n>>k;
    while(n--)
        cout<<f(k,k*k)<<endl;
}