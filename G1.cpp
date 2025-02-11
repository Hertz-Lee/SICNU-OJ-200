#include<cstdio>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0||n==1)
        printf("%d",n);
    else{
        bool lights[1000]={};
        for(int i=2;i<n;i++)
            for(int j=1;j<=n;j++)
                if(j%i==0)
                    lights[j]=!lights[j];
        lights[n]=!lights[n];
        int sum=0;
        for(int i=1;i<=n;i++)
            if(lights[i]==false)
                sum++;
        printf("%d",sum);
    }
}