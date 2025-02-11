#include<cstdio>
int main(){
    int i=0;
    char str[1000];
    while((str[i++]=getchar())!='S');
    while(str[--i]=='\n'||str[i]==' ')
        str[i]='S';
    for(i=0;str[i]!='S';i++)
        if(str[i]!='\n'&&str[i]!=' ')
            if(str[i+1]!='S')
                printf("%c ",str[i]);
            else printf("%c",str[i]);
}