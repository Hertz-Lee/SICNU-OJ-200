#include<cstdio>
int main(){
    char str[1000];
    int i=0,sum=0;
    while((str[i]=getchar())!='\n')
        i++;
    for(int j=0;j<=i;j++)
        if(str[j]>=48&&str[j]<=57)
            sum++;
    printf("%d",sum);
}