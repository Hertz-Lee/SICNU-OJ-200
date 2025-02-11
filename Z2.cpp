#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;cin>>n;
    string s,t;
    while(n>0){
        n--;cin>>s;t=s;
        reverse(t.begin(),t.end());
        s==t?cout<<"Yes\n":cout<<"No\n";
    }
}