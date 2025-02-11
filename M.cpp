#include<iostream>
using namespace std;
int t,y,d,month,mon[]{0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    cin>>t;
    while(t--){
        month=1;cin>>y>>d;
        if(y%4==0&&y%100!=0||y%400==0)
            mon[2]=29;
        else mon[2]=28;
        while(d-mon[month]>0)
            d-=mon[month++];
        cout<<month<<" "<<d<<endl;
    }
}