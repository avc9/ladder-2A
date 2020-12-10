#include<bits/stdc++.h>
using namespace std;
int main(){int i1,j1;
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int c;
            cin>>c;
            a[i][j]=c;
            if(c==1){
                i1=i;
                j1=j;
            }
        }

    }
    cout<<abs(i1-2)+abs(j1-2);
    return 0;
}
