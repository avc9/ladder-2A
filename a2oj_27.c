#include<stdio.h>
int main(){
    int n,d;
    scanf("%d %d",&n,&d);
    int sum=0,buffer;
    for(int i=0;i<n;i++){
        scanf("%d",&buffer);
        sum+=buffer;
    }
    if((d-(sum+10*(n-1)))<0){
        printf("-1");
    }
    else {
        printf("%d",(d-(sum+10*(n-1)))/5+2*(n-1));
    }
    return 0;
}
