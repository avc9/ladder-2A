#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=0){
        printf("%d",n);
    }
    else{
        int arr[10];
        int key=-1*n;
        int i=0;
        while(key>0){
            arr[i]=key%10;
            i++;
            key/=10;
        }
        int last;
        if(arr[0]<arr[1]){
            last=arr[0];
        }
        else{
            last=arr[1];
        }
        //printf("%d %d\n",last,i);
        if(last==0&&i==2){
            printf("0");
            //return 0;
        }
        else{
            printf("-");
            for(int j=i-1;j>1;j--)
                printf("%d",arr[j]);
            printf("%d",last);
        }
    }
    return 0;
}
