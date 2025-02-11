#include<iostream>
int main(){
    char ch1[1000]={};
    bool ch2[129]={};
    fgets(ch1,1000,stdin);
    for(int i=0;(int)ch1[i]!=0;i++)
        if(ch2[(int)ch1[i]]==false){
            std::cout<<ch1[i];
            ch2[(int)ch1[i]]=true;
        }
}