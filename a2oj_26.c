#include<stdio.h>
int minimum(int a,int b,int c){
    if(a<b){
        if(a<c)
            return a;
        else
            return c;
    }
    else{
        if(b<c)
            return b;
        else
            return c;
    }
}
int main(){
    int arr1[5000], arr2[5000] ,arr3[5000];
    int n;
    scanf("%d",&n);
    int key,one=0,two=0,three=0;
    for(int i=0;i<n;i++){
        scanf("%d",&key);
        if(key==1){
            arr1[one]=i+1;
            one++;
        }
        else if(key==2){
            arr2[two]=i+1;
            two++;
        }
        else{
            arr3[three]=i+1;
            three++;
        }
    }
    printf("%d\n",minimum(one,two,three));
    for(int i=0;i<minimum(one,two,three);i++){
        printf("%d %d %d\n",arr1[i],arr2[i],arr3[i]);
    }
    return 0;
}
