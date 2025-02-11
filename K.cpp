#include<iostream>
using namespace std;
int main(){
    int q;scanf("%d",&q);
    do{
        int L,n,x,mintime=0,maxtime=0;
        scanf("%d%d",&L,&n);
        do{
            scanf("%d",&x);
            mintime=max(min(L-x,x),mintime);
            maxtime=max(max(L-x,x),maxtime);
        }while(--n);
        printf("%d %d\n",mintime,maxtime);
    }while(--q);
}