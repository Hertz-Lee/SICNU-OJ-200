#include<cstdio>
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
void write(int x){
    if(x<0)putchar('-'),x=-x;
    if(x>9)write(x/10);
    putchar(x%10+'0');
}
int main(){
    int N;
    N=read();
    int a[5001]={};
    for(int i=1;i<=N;i++)
        a[read()]++;
    for(int i=1;i<=5000;i++)
        if(a[i]!=0){
            write(i);
            putchar(' ');
            write(a[i]);
            putchar('\n');
        }
}