#include<iostream>
using namespace std;
int n,strd,prod[10],ansd[10];
string str,strf,ans,proch,ansch;
int main(){
    cin>>n;
    getchar();
    for(int i=1;i<=n;i++){
        getline(cin,strf);
        proch+=strf;
        prod[i]=proch.length();
        getline(cin,strf);
        ansch+=strf;
        ansd[i]=ansch.length();
    }
    getline(cin,str);
    for(int num=0;num<str.length();num++)
        for(int i=0;i<n;i++){
            strf=proch.substr(prod[i],prod[i+1]-prod[i]);
            strd=str.find(strf,num);
            if(strd!=-1){
                strf=ansch.substr(ansd[i],ansd[i+1]-ansd[i]);
                str.replace(strd,prod[i+1]-prod[i],strf);
                str.insert(strd+1,"\n");
                break;
            }
        }
    strd=str.length();
    for(int i=0;i<strd;i++)
        if(str[i]!='\n')
            cout<<str[i];
}