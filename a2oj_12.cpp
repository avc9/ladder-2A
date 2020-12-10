#include<bits/stdc++.h>
using namespace std;
/*int main(){
    int a,b;
    bool to_play=false;
    cin>>a>>b;
    while((a>0)&&(b>0)){
        a--;
        b--;
        to_play=(!to_play);
    }
    if(to_play==false)
        cout<<"Malvika";
    else
        cout<<"Akshat";
    return 0;
}*/
int main(){
    int a,b;
    cin>>a>>b;
    if(a<b){
        if(a%2==0){
            cout<<"Malvika";
        }
        else{
            cout<<"Akshat";
        }
    }
    else{
        if(b%2==0){
            cout<<"Malvika";
        }
        else{
            cout<<"Akshat";
        }
    }
    return 0;

}
