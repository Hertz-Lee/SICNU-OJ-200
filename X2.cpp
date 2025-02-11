#include<cstdio>
int main(){
    char ch[100]={};
    fgets(ch,100,stdin);
    int num=0,big=0,small=0;
    for(int i=0;(int)ch[i]!=0;i++)
        if((int)ch[i]>=48&&(int)ch[i]<=57)
            num++;
        else if((int)ch[i]>=65&&(int)ch[i]<=90)
            big++;
        else if((int)ch[i]>=97&&(int)ch[i]<=122)
            small++;
    printf("%d\n%d\n%d",num,big,small);
}