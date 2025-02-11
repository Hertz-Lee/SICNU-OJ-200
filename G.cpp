#include<cstdio>
int main(){
    long long a,b,n,i=1;
    scanf("%lld%lld%lld",&a,&b,&n);
    long long days=(n-n%(a*5+b*2))/(a*5+b*2)*7;
    n=n%(a*5+b*2);
    while(n>0)
        if(i++<=5){n-=a;days++;}
        else{n-=b;days++;}
    printf("%lld",days);
}