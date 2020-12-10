#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    //n++;
    int flag=0;
    while(flag==0){
        count++;
        n++;
        int no_of_digits=0;
        int buffer=abs(n);
        while(buffer!=0){
            buffer/=10;
            no_of_digits++;
        }
        buffer=abs(n);
        for(int i=0;i<no_of_digits;i++){
            if(buffer%10==8){
                flag=1;
                break;
            }
            else
                buffer/=10;
        }
        
    }
    printf("%d",count);
    return 0;
}
