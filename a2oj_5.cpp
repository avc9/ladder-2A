#include<iostream>
#include<string.h>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    //for(auto i=s1.begin(),j=s2.begin();i!=s1.end(),j!=s2.begin();i++,j++){
    //    i=tolower(i);
    //    j=tolower(j);
    //}
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    //cout<<s1<<endl<<s2<<endl;
    if(s1>s2)
        cout<<"1";
    else if(s1==s2)
        cout<<"0";
    else
        cout<<"-1";
    return 0;
}
