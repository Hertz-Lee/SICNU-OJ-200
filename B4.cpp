#include<cstdio>
long long a[1001],n,m,l,r;
int main(){
    scanf("%lld",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        a[i]+=a[i-1];
    }
    scanf("%lld",&m);
    while(m--){
        scanf("%lld%lld",&l,&r);
        printf("%lld\n",a[r]-a[l-1]);
    }
    return 0;
}