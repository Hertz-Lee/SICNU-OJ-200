#include<cstdio>
#include<cstring>
int main(){
    int n;
    scanf("%d",&n);
    n%=26;
    char s[100001]={};
    scanf("%s",s);
    for(int i=strlen(s)-1,f;i>=0;i--){
        f=s[i]+n;
        if(f>122)s[i]=f-26;
        else s[i]=f;
    }
    printf("%s",s);
}