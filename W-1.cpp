#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ans[32]={},num=false;
    if(n<0){
        n=-n;
        num=true;
    }
    for(int i=0;n>0;i++){
        ans[i]=n%2;
        n=n/2;
    }
    if(num){
        for(int i=0;i<=31;i++)
            ans[i]=!ans[i];
        for(int i=0;i<=31;i++)
            if(ans[i])
                ans[i]=false;
            else{
                ans[i]=true;
                break;
            }
    }
    for(int i=31;i>=0;i--)
        cout<<ans[i];
}