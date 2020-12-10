#include<iostream>
#include<string.h>
using namespace std;

int main(){

    string str;
    int a;
    cin>>a;
    while(a>0){
        cin>>str;
        if(str.length()>10)
            cout<<str[0]<<str.length()-2<<str[str.length()-1];
        else
            cout<<str;
        a--;
    }
    return 0;
}
