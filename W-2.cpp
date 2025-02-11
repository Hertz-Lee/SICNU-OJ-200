#include<cstdio>
#include<algorithm>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++)
            scanf("%d",&a[i][j]);
    for(int i=n-2;i>=0;i--)
        for(int j=0;j<=i;j++)
            a[i][j]+=std::max(a[i+1][j+1],a[i+1][j]);
    printf("%d",a[0][0]);
}