#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //int a[n],b[n];
    vector <pair<int,int>> vect;
    for(int i=0;i<n;i++){
        int a1,a2;
        //cin>>vect[i].first>>vect[i].second;
        cin>>a1>>a2;
        vect.push_back(make_pair(a1,a2));
    }
    sort(vect.begin(),vect.end());
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(vect[i+1].second<vect[i].second){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Happy Alex";
    }
    else{
        cout<<"Poor Alex";
    }
    return 0;
}
