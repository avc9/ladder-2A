#include<stdio.h>
int main(){
    int a0,b0,c0;
    scanf("%d %d",&a0,&b0);
    c0=a0+b0;
    int a=0,b=0,c=0;
    int key=1;
    while(a0>0){
        if(a0%10==0){
            a0/=10;
            continue;
        }
        a=a+(key*(a0%10));
        key*=10;
        a0/=10;
    }
    key=1;
    while(b0>0){
        if(b0%10==0){
            b0/=10;
            continue;
        }
        b=b+(key*(b0%10));
        key*=10;
        b0/=10;
    }
    key=1;
    while(c0>0){
        if(c0%10==0){
            c0/=10;
            continue;
        }
        c=c+(key*(c0%10));
        key*=10;
        c0/=10;
    }
    if(c==a+b){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
