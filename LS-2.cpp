// 深度优先搜索
// #include<cstdio>
// #include<algorithm>
// using namespace std;
// int n,l,a[1000],b,ans[1000],r[1000],Length[1000];
// void f(int m,int i,int d){
//     r[d]=i;
//     m=min(m+a[i],l);
//     if(d<Length[i])return;
//     if(m<0&&b<d){
//         b=d;
//         copy(r,r+d,ans);
//         Length[i]=d;
//         return;
//     }else if(m>=0&&b<d+1&&i==n-1){
//         b=d+1;
//         copy(r,r+d,ans);
//         Length[i]=d;
//         ans[b-1]=i;
//         return;
//     }else if(m>=0)
//         while(++i<n){
//             if(d+n-i+1<=b)return;
//             f(m,i,d+1);
//         }
// }
// int main(){
//     int m;
//     scanf("%d%d%d",&n,&m,&l);
//     for(int i=0;i<n;i++)
//         scanf("%d",&a[i]);
//     for(int i=0;i<n;i++)
//         f(m,i,0);
//     printf("%d\n",b);
//     for(int i=0;i<b-1;i++)
//         printf("%d ",ans[i]+1);
//     printf("%d",ans[b-1]+1);
// }
// 线性动态规划
// #include<cstdio>
// #include<algorithm>
// using namespace std;
// int a,n,l,m[1001],sum[1001],ans[1001];
// int main(){
//     scanf("%d%d%d",&n,&m[0],&l);
//     for(int i=1;i<=n;i++){
//         scanf("%d",&a);
//         sum[i]=sum[i-1];
//         for(int j=i-1;j>=0;j--)
//             if(m[j]+a>=m[i]&&sum[j]+1>=sum[i]){
//                 m[i]=min(m[j]+a,l);
//                 sum[i]=sum[j]+1;
//                 ans[sum[i]]=i;
//             }
//     }
//     printf("%d\n",sum[n]);
//     for(int i=1;i<=sum[n];i++)
//         printf("%d ",ans[i]);
// }
// 非线性动态规划
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int n,m,l,td,sum,a[1005],ans[1005],datas[1005],map[1005][105];
// int main(){
//     cin>>n>>m>>l;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//         if(a[i]>0)datas[++td]=i;
//     }
//     datas[++td]=n+1;
//     for(int i=1;i<=n;i++)
//         if(a[i]<=0)for(int j=0;j<=l;j++)
//             if(j+a[i]<0)map[i][j]=map[i-1][j];
//             else map[i][j]=max(map[i-1][j],map[i-1][j+a[i]]+1);
//     for(int i=1;i<=td;i++){
//         for(int j=datas[i]-1;j>datas[i-1];j--)
//             if(map[j][m]>map[j-1][m])
//                 ans[++sum]=j,m+=a[j];
//         ans[++sum]=datas[i];
//         m=min(l,m+a[datas[i]]);
//     }
//     sort(ans+1,ans+1+(--sum));
//     cout<<sum<<endl;
//     for(int i=1;i<=sum;i++)
//         cout<<ans[i]<<" ";
// }

#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
stack<int>ans;
int imp,num,lwr,upr,dlt[1001],inf[1001][1001],lnk[1001][1001];
int main(void){
    ios::sync_with_stdio(false);
    cin>>num>>lwr>>upr;
    for(int i=1;i<=num;i++){
        cin>>dlt[i];
        lnk[0][i]=lwr;
        lnk[i][i]=lwr;
    }
    for(int i=1;i<=num;i++)
        for(int j=i;j<=num;j++)
            if(lnk[i][i]+dlt[j]>=0){
                if(inf[i-1][j]>inf[i][i]+1){
                    inf[i][j]=inf[i-1][j];
                    lnk[i][j]=lnk[i-1][j];
                }else{
                    inf[i][j]=inf[i][i]+1;
                    lnk[i][j]=min(upr,lnk[i][i]+dlt[j]);
                }
            }else{
                inf[i][j]=inf[i-1][j];
                lnk[i][j]=lnk[i-1][j];
            }
    cout<<endl;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++)
            cout<<lnk[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++)
            cout<<inf[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=num;i++)
        if(inf[i][i]>inf[imp][imp])
            imp=i;
    cout<<inf[imp][imp]<<endl;
    for(int i=imp,j=imp,tmp=1;i>0;i--,tmp++){
        if(inf[i][j]-1==0){
            ans.push(j);
            break;
        }
        if(inf[i][j]-inf[i-1][i-1]==1){
            ans.push(j);
            j-=tmp;
            tmp=0;
        }
    }
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
    return 0;
}