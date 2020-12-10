#include<bits/stdc++.h>
using namespace std;
double distance(int x1,int y1,int x2,int y2){
    double dist;
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return dist;
}
int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double dist=distance(x1,y1,x2,y2);
    if(floor(dist)!=dist&&floor(1.0*dist/sqrt(2.0))!=1.0*dist/sqrt(2.0)){
        cout<<"-1";
    }
    cout<<floor((1.0*dist)/sqrt(2.0))<<" "<<(1.0*dist)/sqrt(2.0)<<" "<<dist<<endl;
    if((floor(1.0*dist/sqrt(2)))==(1.0*dist/sqrt(2))){
        cout<<" in";
        int x3,y3,x4,y4,x0,y0;
        x0=x1;
        y0=y1;
        x1=0; y1=0;
        x2-=x0;y2-=y0;
        x3=x2+x0;
        x4=x0;
        y3=y0;
        y4=y2+y0;
        cout<<x3<<" ";
        cout<<y3<<" ";
        cout<<x4<<" ";
        cout<<y4;
    }
    return 0;
}
