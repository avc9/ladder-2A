#include<bits\stdc++.h>
using namespace std;
int sumfinder(int n,int m,int a[]){
    sort(a,a+n);
    int sum=0;
    for(int i=0;i+1<=m&&a[i]<0;i++){
        sum+=a[i];
    }
    return -1*sum;
}
int main(){
    int n1,m1,a1[100];
    cin>>n1>>m1;
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    cout<<sumfinder(n1,m1,a1);
    return 0;
}
