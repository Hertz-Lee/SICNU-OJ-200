#include<map>
#include<cstdio>
std::map<int,int>b;
int main(){
    int *a,n,c,ans=0;
    scanf("%d%d",&n,&c);
    a=new int[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
        a[i]-=c;
    }
    for(int i=0;i<n;i++)
        ans+=b[a[i]];
    printf("%d",ans);
}