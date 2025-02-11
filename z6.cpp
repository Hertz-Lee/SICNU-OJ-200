#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    if(n==1)cout<<0;
    else{
        while(n>0){
            n/=2;
            ans++;
        }
        cout<<ans;
    }
}