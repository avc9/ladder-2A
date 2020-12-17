#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    int h=0,e=0,l=0,o=0;
    for(auto iter=0;iter<s1.size();iter++){
        if(s1[iter]=='h'&&e==0&&l==0&&o==0)
            h++;
        else if(s1[iter]=='e'&&h>0&&l==0&&o==0)
            e++;
        else if(s1[iter]=='l'&&e>0&&o==0)
            l++;
        else if(s1[iter]=='o'&&l>1)
            o++;
        else
            continue;
    }
    if(o>0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
