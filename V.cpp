#include<cstdio>
#include<algorithm>
int main(){
    unsigned long long N,sum=0;
    scanf("%llu",&N);
    for(unsigned long long i=1,next=1,last=0;i<=N;i++){
        printf("%llu\n",next);
        sum+=next;
        std::swap(next,last);
        next+=last;
    }
    printf("%llu",sum);
}