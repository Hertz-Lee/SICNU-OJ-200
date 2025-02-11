#include<cstdio>
int main(){
    int a[1001],n,needle=2,product;
    scanf("%d%d%d",&a[0],&a[1],&n);
    for(int i=0;needle<n;i++){
        product=a[i]*a[i+1];
        if(product<10)
            a[needle++]=product;
        else{
            a[needle++]=product/10;
            a[needle++]=product%10;
        }
    }
    for(int i=0;i<n-1;i++)
        printf("%d ",a[i]);
    printf("%d",a[n-1]);
}