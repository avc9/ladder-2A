#include<iostream>
#include<string.h>
#include<vector>

using namespace std;
string :: iterator finding(string s1,string s2,string::iterator itr2){
    int check=0,i1234=s1.size();
    while(itr2!=s2.end()){
        if((check==0)&&((*itr2)==s1[check])){
            check++;
            itr2++;
            continue;
        }
        if((check==0)&&((*itr2)!=s1[check])){
            itr2++;
            continue;
        }
        if((check>0)&&((*itr2)==s1[check-1])){
            itr2++;
            continue;
        }
        if((check>0)&&((*itr2)!=s1[check-1])){
            if((*itr2)==s1[check]){
                check++;
                itr2++;
                if(check==i1234-1){
                    return (s2.begin());
                }
                continue;
            }
            else{
            return (++itr2);
            }

        }

    }
    return itr2;
}
int main(){
    string s1,s2;
    s1="hello";
    cin>>s2;
    auto itr=s2.begin();
    while(itr!=s2.end()){
        itr=finding(s1,s2,itr);
        if(itr==s2.begin()){
            break;
        }
    }
    if(itr==s2.end())
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}
