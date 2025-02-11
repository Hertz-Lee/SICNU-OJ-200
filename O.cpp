#include<iostream>
using namespace std;
bool love(int x){
    for(int i=2;i<x;i++)
        if(x%i==0)return false;
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    if(a+b>100&&love(a)&&love(b))cout<<"YES";
    else cout<<"NO";
}