#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int lz=0,lhz=0;
    double x,y,t,nn,aa;
    scanf("%lf%lf%lf",&x,&y,&t);
    double n[100000],a[100000];
    for(int td=0;td<t;td++)
        scanf("%lf%lf",&n[td],&a[td]);
    for(int td=0;td<t;td++){
        nn=n[td];aa=a[td];
        if(nn==0)lz+=ceil(aa/x);
        else while(aa>0){
            lz+=min(ceil(nn/50),ceil(aa/(x*0.7)));
            aa-=(ceil(nn/50)*0.7+1.3)*x;
            for(int i=0;i<2&&aa>0;i++)
                lz++,aa-=x;
            nn=n[td];
        }
    }
    for(int td=0;td<t;td++){
        nn=n[td];aa=a[td];
        if(nn==0)lhz+=ceil(aa/y);
        else while(aa>0){
            lhz+=min(ceil(nn/100),ceil(aa/(y*0.5)));
            aa-=(ceil(nn/100)*0.5+2.5)*y;
            for(int i=0;i<2&&aa>0;i++) 
                lhz++,aa-=y;
            nn=n[td];
        }
    }
    printf("%d\n%d\n",lz,lhz);
    if(lz==lhz)printf("xue zhang men tql!");
    else if(lz>lhz)printf("LHZ YES!");
    else if(lz<lhz)printf("LZ YES!");
}