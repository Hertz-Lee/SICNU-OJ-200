#include<iostream>
using namespace std;
int main(){
    int n,t,tmax,day=1,daymax=1;
    cin>>n>>tmax;
    while(--n){
        cin>>t;
        if(t<=tmax){
            daymax=max(day,daymax);
            day=1;
        }else day++;
        tmax=t;
    }
    cout<<daymax;
}