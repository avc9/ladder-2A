#include<stdio.h>
int main(){
    int y,k,n;
    scanf("%d %d %d",&y,&k,&n);
    int m=n/k;
    if(k*m-y<=0){
        printf("-1");
    }
    else{
        for (int i=1;i<=m;i++){
            if((k*i-y)>0)
                printf("%d ",k*i-y);
        }
    }
    return 0;
}
