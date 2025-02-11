#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int r,c,m,a,b,f[100],B[100][100],P[100][100]{};
    cin>>r>>c>>m;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cin>>B[i][j];
        f[i]=i;
    }
    for(int i=0;i<m;i++){
        cin>>a>>b;
        swap(f[a-1],f[b-1]);
    }
    for(int i=0;i<r;i++){
        P[i][f[i]]=1;
        for(int j=0;j<r;j++)
            cout<<P[i][j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<B[f[i]][j]<<" ";
        cout<<endl;
    }
}