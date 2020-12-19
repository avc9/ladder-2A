#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int *a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int count=0;
    for(int i=2;i<n;i=i+3){
        if(5-a[i]>=k)
            count++;
        else
            break;
    }
    cout<<count;
    delete a;
    return 0;
}
