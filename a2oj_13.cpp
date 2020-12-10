#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[30],b[30],n,count1=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                if(a[i]==b[j]){

                count1++;
                continue;
                }
            }
        }

    }
    cout<<count1;
    return 0;
}
