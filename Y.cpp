#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int n,x,y;
    scanf("%d%d%d",&n,&x,&y);
    int a[n],flag,num2,num1,min2,min1=1000000;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++){
        num1=abs(x-a[i]);
        num2=abs(y-i);
        if(num1<min1){
            flag=i;
            min1=num1;
            min2=num2;
        }else if(num1==min1&&num2<min2){
            flag=i;
            min2=num2;
        }else if(num1>min1)
            break;
    }
    printf("%d",flag+1);
}