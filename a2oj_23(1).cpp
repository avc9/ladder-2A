#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int x3,x4,y3,y4;
    x2-=x1;y2-=y1;
    if(abs(x2)==abs(y2)){
        x3=x2+x1;
        y3=y1;
        x4=x1;
        y4=y2+y1;
        if(x3<-1000||y3<-1000||x4<-1000||y4<-1000||x3>1000||y3>1000||x4>1000||y4>1000)
            cout<<"-1";
        else
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else if(x2==0){
        x3=y2+x1;
        y3=y1;
        x4=y2+x1;
        y4=y2+y1;
        if(x3<-1000||y3<-1000||x4<-1000||y4<-1000||x3>1000||y3>1000||x4>1000||y4>1000)
            cout<<"-1";
        else
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else if(y2==0){
        y3=x2+y1;
        x3=x1;
        x4=x2+x1;
        y4=x2+y1;
        if(x3<-1000||y3<-1000||x4<-1000||y4<-1000||x3>1000||y3>1000||x4>1000||y4>1000)
            cout<<"-1";
        else
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else
        cout<<"-1";
    return 0;
}
