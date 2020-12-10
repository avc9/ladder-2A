#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n,count1=0,count2=0;
    cin>>n;
    string s1,s2,buffer;
    
    for(int i=0;i<n;i++){
        if(i==0){
            cin>>s1;
            count1++;
        }
        if(i==n-1){
            break;
        }
        cin>>buffer;
        if(s1==buffer){
            count1++;
        }
        else{
            count2++;
            s2=buffer;
        }
    }
    if(count1>count2){
        cout<<s1;
    }
    else{
        cout<<s2;
    }
    return 0;
}
