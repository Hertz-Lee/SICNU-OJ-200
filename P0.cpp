#include<cstdio>
unsigned t,work;
void function(){
    long long n,k,head=1,sum=1;
    scanf("%lld%lld",&n,&k);
    while(k--){
        scanf("%u",&work);
        if(work==1)head+=sum;
        sum*=2;
    }
    printf("%lld\n",head);
}
int main(){
    scanf("%u",&t);
    while(t--)function();
}