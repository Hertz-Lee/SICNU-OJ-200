#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--){
        int a,b,n;
        cin>>a>>b>>n;
        b=(b-b%2)/2*3;
        if(n>b)n-=b;
        else n%=3;
        if(n<=a)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}