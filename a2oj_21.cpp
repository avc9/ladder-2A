#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,Rs=0;
    cin>>n>>m>>a>>b;
    if(b>=a*m){
        cout<<a*n;
    }
    else{

        while((n-m*Rs)>=0&&(a*n+(b-a*m)*Rs)>=0){
            Rs++;
        }
        cout<<a*n+(b-a*m)*(Rs);
    }
    return 0;

}
