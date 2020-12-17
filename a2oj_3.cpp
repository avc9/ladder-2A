#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    for(auto iter=0;iter<s1.size();iter++){
        if(s1[iter]=='a'||s1[iter]=='e'||s1[iter]=='i'||s1[iter]=='o'||s1[iter]=='u')
            continue;
        else
            cout<<"."<<s1[iter];
    }
    return 0;
}
