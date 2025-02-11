#include<cstdio>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d %.2f ",a/b,(double)a/(double)b);
    a%b?printf("%d",a/b+1):printf("%d",a/b);
}