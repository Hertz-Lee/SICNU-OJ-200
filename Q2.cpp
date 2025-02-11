#include<cstdio>
int main(){
    int n,a,b,c,d;
    scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
    for(int i=2,f;i<=n;i++){
        scanf("%d",&f);a+=f;
        scanf("%d",&f);b+=f;
        scanf("%d",&f);c+=f;
        scanf("%d",&f);d+=f;
    }
    printf("%d",(int)((a*0.256+b*0.128+c*4+d*5)/10)*10);
}