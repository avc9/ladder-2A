#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    //cout<<s<<endl;
    int position=0;
    cout<<t.size()<<endl;

    for(auto iter=0;iter<sizeof(t);iter++){
        if(t[iter]==s[position]){
            cout<<"IN "<<t[iter]<<" "<<s[position]<<endl;
            position++;
        }
    }
    cout<<(position+1);
    return 0;
}
