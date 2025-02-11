#include<iostream>
using namespace std;
int num,sum=1,maxline=1,times=1;
char symbol;
void module(int i){
    for(int j=1;j<=(maxline-i*2+1)/2;j++)
        cout<<" ";
    for(int j=1;j<=i*2-1;j++)
        cout<<symbol;
    cout<<endl;
}
int main(){
    cin>>num>>symbol;
    while(maxline+2+sum*2<num){
        maxline+=2;
        sum+=maxline;
        times++;
    }
    for(int i=1;i<=times;i++)
        module(i);
    for(int i=times-1;i>=1;i--)
        module(i);
    cout<<num+maxline-sum*2;
}