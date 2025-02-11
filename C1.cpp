#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int r,m,c,A[100][100],B[100][100],C[100][100]{};
    cin>>r>>m>>c;
    for(int i=0;i<r;i++)
        for(int j=0;j<m;j++)
            cin>>A[i][j];
    for(int i=0;i<m;i++)
        for(int j=0;j<c;j++)
            cin>>B[i][j];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            for(int n=0;n<m;n++)
                C[i][j]+=A[i][n]*B[n][j];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<C[i][j]<<" ";
        cout<<endl;
    }
}