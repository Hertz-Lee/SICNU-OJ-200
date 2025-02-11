#include<cstdio>
#include<cmath>
long long pn,n,i,j,a,b,a_sum,b_sum=1,num[20],common;
char ch;
long long gcd(long long n,long long m){
    return m?gcd(m,n%m):n;
}
void read_f(){
    a=0;
    b=0;
    if((ch=getchar())==45){
        i=0;
        pn=-1;
    }else{
        i=1;
        pn=1;
        num[0]=ch-48;
    }
    while((ch=getchar())!='/')
        num[i++]=ch-48;
    j=i-1;
    for(i=0;i<=j;i++)
        a+=num[i]*pow(10,j-i);
    a*=pn;
    i=0;
    while((ch=getchar())!=' '&&ch!='\n'&&ch!=EOF)
        num[i++]=ch-48;
    j=i-1;
    for(i=0;i<=j;i++)
        b+=num[i]*pow(10,j-i);
    if(a<0){
        common=gcd(-a,b);
        a/=common;
        b/=common;
    }else{
        common=gcd(a,b);
        a/=common;
        b/=common;
    }
}
void plus_f(){
    common=b*b_sum/gcd(b,b_sum);
    a*=common/b;
    a_sum*=common/b_sum;
    a_sum+=a;
    b_sum=common;
    if(a_sum<0){
        common=gcd(-a_sum,b_sum);
        a_sum/=common;
        b_sum/=common;
    }else{
        common=gcd(a_sum,b_sum);
        a_sum/=common;
        b_sum/=common;
    }
}
int main(){
    scanf("%lld",&n);
    getchar();
    while(n--){
        read_f();
        plus_f();
    }
    if(b_sum==1)
        printf("%lld",a_sum);
    else
        if(abs(a_sum)<b_sum)
            printf("%lld/%lld",a_sum,b_sum);
        else
            printf("%lld %lld/%lld",a_sum/b_sum,a_sum%b_sum,b_sum);
}