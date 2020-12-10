#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char c1,c2;
    int flag=0;
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         cin>>a[i][j];
         if(i==0&&j==0){
            c1=a[i][j];
         }
         else if(i==0&&j==1){
            c2=a[i][j];
         }
         else{
            if(a[i][j]!=c1&&a[i][j]!=c2){
                flag=1;
            }
         }
        }
    }

    if(c1==c2){
        cout<<"NO";
        return 0;
    }
    if(flag==1){
        cout<<"NO";

    }
    else{
        for(int i=0;i<n;i++){
            if(c1!=a[i][i]||c1!=a[n-i-1][i]){
                //cout<<"I am here"<<endl;
                cout<<"NO";
                return 0;
            }
            for(int j=0;j<n;j++){
                if(i==j||i==n-j-1)
                    continue;
                if(c2!=a[i][j]){
                    cout<<"NO";
                    return 0;
                }
            }
        }
        cout<<"YES";
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }*/
    return 0;
}
