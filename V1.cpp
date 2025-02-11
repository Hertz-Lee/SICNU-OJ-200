#include<cstdio>
int main(){
    int n,a;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        if(a%8==3||a%8==5||a%8==6)printf("YES\n");
        else printf("NO\n");
    }
}