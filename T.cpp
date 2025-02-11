#include<iostream>
using namespace std;
int main(){
    double t,x1,x2,x3,y1,y2,y3,xf1,xf2,yf1,yf2;
    cin>>t;
    while(t--){
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if(abs((y2-y1)*(x3-x1))==abs((y3-y1)*(x2-x1)))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}