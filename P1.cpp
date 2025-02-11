#include<cstdio>
int gcd(int n,int m){
    return m?gcd(m,n%m):n;
}
int main(){
    int n;scanf("%d",&n);
    for(int a,b;n>0;n--){
        scanf("%d%d",&a,&b);
        printf("%d\n",gcd(a,b));
    }
}