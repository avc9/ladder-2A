#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string :: iterator itr_start=s1.begin();
    string :: iterator itr_end=s1.end();
    //cout<<*itr_start<<" "<<*itr_end<<endl;
    while((*itr_start=='W')&&(*(itr_start+1)=='U')&&(*(itr_start+2)=='B')){
        itr_start=itr_start+3;
    }
    //cout<<*itr_start<<" "<<*itr_end<<endl;
    while((*(itr_end-1)=='B')&&(*(itr_end-2)=='U')&&(*(itr_end-3)=='W')){
        itr_end=itr_end-3;
    }
    //cout<<*itr_start<<" "<<*(itr_end-1)<<endl;
    for(auto itr=itr_start;itr!=itr_end;itr++){
        if((*itr=='W')&& (*(itr+1)=='U') && (*(itr+2)=='B')){
            itr+=2;
            cout<<" ";
            continue;
        }
        cout<<*itr;
    }

}
