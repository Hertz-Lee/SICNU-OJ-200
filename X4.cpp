#include<iostream>
using namespace std;
int main(){
    int A,B,C=0;
    bool num[1001]={};
    cin>>A>>B;
    for(int i=A;i<=B;i++){
        if(num[i]==true)continue;
        for(int j=2;j<i;j++)
            if(i%j==0){
                num[i]=true;
                break;
            }
        for(int j=2;j*i<=B;j++)num[j*i]=true;
        if(num[i]==false)C++;
    }
    cout<<C;
}