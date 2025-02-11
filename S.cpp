#include<cstdio>
#include<cstring>
int main(){
    char t[20001]={};
    scanf("%s",t);
    short num8=0;
    for(short i=strlen(t)-1,f=1;i>=0&&f<=100;i--,f*=10)
        num8+=(t[i]-48)*f;
    short num3=0;
    while(strlen(t)){
        num3+=t[strlen(t)-1]-48;
        t[strlen(t)-1]=0;
    }
    if(num3%3==0)printf("YES\n");
    else printf("NO\n");
    if(num8%8==0)printf("YES");
    else printf("NO");
}