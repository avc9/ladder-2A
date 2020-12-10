#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1;
    for(unsigned int i=0;i<s1.length();i++){
        if(s1[i]=='+')
            continue;
        else
            s2+=s1[i];
        }
    sort(s2.begin(),s2.end());
    for(unsigned int i=0,j=0;i<s2.length();j++){
            if(j%2!=0)
                cout<<"+";
            else{
                cout<<s2[i];
                i++;
            }
        }
    return 0;
}
