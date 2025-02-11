#include<iostream>
using namespace std;
int yr1,m1,d1,s1,f1;
int yr2,m2,d2,s2,f2;
int mon1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int mon2[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
void functions(){
    cin>>yr1>>m1>>d1>>s1>>f1;
    cin>>yr2>>m2>>d2>>s2>>f2;
    if(((yr1%4==0)&&(yr1%100!=0))||yr1%400==0)mon1[2]=29;
    else mon1[2]=28;
    if(((yr2%4==0)&&(yr2%100!=0))||yr2%400==0)mon2[2]=29;
    else mon2[2]=28;
    if(m1<1||m2<1||s1<0||s2<0||f1<0||f2<0||d1<1||d2<1||m1>12||m2>12||s1>23||s2>23||f1>59||f2>59||d1>mon1[m1]||d2>mon2[m2])
        cout<<"0\n";
    else{
        int judge[5]={};
        if(yr1>yr2)judge[0]=1;
        else if(yr1<yr2)judge[0]=2;
        if(m1>m2)judge[1]=1;
        else if(m1<m2)judge[1]=2;
        if(d1>d2)judge[2]=1;
        else if(d1<d2)judge[2]=2;
        if(s1>s2)judge[3]=1;
        else if(s1<s2)judge[3]=2;
        if(f1>f2)judge[4]=1;
        else if(f1<f2)judge[4]=2;
        for(int i=0;i<=4;i++)
            if(judge[i]==1){
                cout<<"-1\n";
                return;
            }
            else if(judge[i]==2){
                cout<<"1\n";
                return;
            }
        cout<<"-1\n";
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)functions();
}