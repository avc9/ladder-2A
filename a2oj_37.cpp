#include<bits/stdc++.h>
using namespace std;
int minimum(int a,int b,int c){
    if(a<b){
        if(a<c)
            return a;
        else
            return c;
            
    }
    else{
        if(b<c)
            return b;
        else
            return c;
            
    }
}
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<minimum(((k*l)/nl),(c*d),p/np)/n;
    return 0;
}
