#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1){
        if(c==1){
            cout<<a+b+c;
        }
        else{
            cout<<(a+b)*c;
        }
    }
    else if(c==1){
        if(a==1){
            cout<<a+b+c;
        }
        else{
            cout<<(c+b)*a;
        }
    }
    else if(b==1){
        if(a<=c){
            if(c!=1){
                cout<<(a+b)*c;
            }
            else{
                cout<<a+b+c;
            }
        }
        else{
            if(a!=1){
                cout<<(c+b)*a;
            }
            else{
                cout<<a+b+c;
            }
        }
    }
    else{
        cout<<a*b*c;
    }
    return 0;

}
