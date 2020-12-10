#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
        v.push_back(a);
    }
    //cout<<sum<<endl;
    sort(v.begin(),v.end(),greater<int>());

    int number=1;
    auto itr=v.begin();
    auto check=*itr;
    //cout<<check<<endl;
    while(check<=sum-check){
        itr++;
        check+=*itr;
        //cout<<check<<endl;
        number++;

    }
    cout<<number;
    return 0;
}
