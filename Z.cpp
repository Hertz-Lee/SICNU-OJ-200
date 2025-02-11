#include<cstdio>
int ans;
void recursion(int n,int m){
    if(n==0)ans++;
    else for(int i=2;i<=m&&i<=n;i++)
        recursion(n-i,i);
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);m++;
    for(int i=2;i<=m;i++)n-=i;
    if(n>0)for(int i=2;i<=m&&i<=n;i++)
        recursion(n-i,i);
    else if(n==0)ans=1;
    ans==0?printf("-1"):printf("%d",ans);
}