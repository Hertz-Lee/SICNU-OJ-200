#include<cstdio>
int n,x[1001],turn[6001][1001],maxnum,minnum=6000;
char s[1001][101];
int read(){
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-')f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        x=(x<<1)+(x<<3)+(ch^48);
        ch=getchar();
    }
    return x*f;
}
void input_module(int i){
    scanf("%s",s[i]);
    for(int j=1;j<=6;j++)
        x[i]+=read();
    if(x[i]>maxnum)
        maxnum=x[i];
    if(x[i]<minnum)
        minnum=x[i];
    int f=1;
    while(turn[x[i]][f]!=0)
        f++;
    turn[x[i]][f]=i;
}
void output_module(){
    for(int i=maxnum;i>=minnum;i--)
        for(int j=1;turn[i][j]!=0;j++)
            printf("%s\n",s[turn[i][j]]);
}
int main(){
    n=read();
    for(int i=1;i<=n;i++)
        input_module(i);
    output_module();
}