#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,Rs=0;
    cin>>n>>m>>a>>b;
    if(b>=a*m){
        cout<<a*n;
    }
    else{

        cout << (n/m) * b + min((n%m) * a, b) << "\n";
    }
    return 0;

}
