#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[i][j]=='o'&&a[i][j+1]=='o')
                count++;
        }
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1;i++){
            if(a[i][j]=='o'&&a[i+1][j]=='o')
                count++;
        }
    }
    if(count%2==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
