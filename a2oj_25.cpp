#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int x=n-1;
    int flag=0;
    while(x>=0){
        if((n-x)%m==0&&(n-2*x)>=0){
            cout<<n-x;
            flag=1;
            break;
        }
        x--;
    }
    if(flag==0){
        cout<<"-1";
    }
    return 0;
}
