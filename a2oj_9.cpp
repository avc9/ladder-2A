#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> pair1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        pair1.push_back(make_pair(j, i+1));
    }
    sort(pair1.begin(),pair1.end());
    for(int i=0;i<n;i++)
        cout<<pair1[i].second<<" ";
    cout<<endl;
    return 0;
}
