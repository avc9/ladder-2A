#include<stdio.h>
int main(){
    int k,d;
    scanf("%d %d",&k,&d);
    if(d==0 && k==1)
        printf("0");
    else if(d==0 && k>1){
        printf("No solution");
    }
    else{
        printf("%d",d);
        for(int i=1;i<k;i++){
            printf("0");
        }
    }
    return 0;
}
