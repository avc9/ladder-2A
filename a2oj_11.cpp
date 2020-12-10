#include<bits/stdc++.h>
using namespace std;
int main(){
    int maxpos=0,minpos=0,max1=0,min1=0,n;
    //int a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        if(i==0){
            max1=c;
            min1=c;
            continue;
            cout<<"if 1 max1 "<<max1<<endl;
            cout<<"if 1 min1 "<<min1<<endl;
        }
        if((i>0)&&(c>max1)){
            max1=c;
            maxpos=i;
            cout<<"if 2 max1 "<<max1<<endl;
            cout<<"if 2 maxpos "<<maxpos<<endl;
            continue;
        }
        if((i>0)&&(c<min1)){
            min1=c;
            minpos=i;
            cout<<"if 3 min1 "<<min1<<endl;
            cout<<"if 3 minpos "<<minpos<<endl;
            continue;
        }
        if(c==min1){
            minpos=i;
            cout<<"if 4 minpos "<<minpos<<endl;
        }


    }
    if(minpos>maxpos){
        cout<<n-1-minpos+maxpos;
    }
    else{
        cout<<maxpos+n-2-minpos;
    }

    return 0;
}
