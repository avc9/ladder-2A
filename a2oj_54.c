#include<stdio.h>
#include<stdlib.h>
int main(){
    int key,n,max,min;
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    scanf("%d",&a[0]);
    max=a[0];
    min=a[0];
    for(int i=1;i<n;i++){
        scanf("%d",&a[i]);
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    //printf("%d %d\n",max,min);
    while(max!=min){
        for(int i=0;i<n;i++){
            if(a[i]!=min)
                a[i]=a[i]-min;
            else
                continue;
        }
        max=a[0];min=a[0];
        for(int i=0;i<n;i++){
            
            if(max<a[i]){
                max=a[i];
            }
            if(min>a[i]){
                min=a[i];
            }
        }
        //printf("%d %d\n",max,min);
        
    }
    /*key=min-(max%min);
    //printf("%d %d",max,min);
    if(max%min==0){
        printf("%d",((max/min)*n));
    }
    else{
        printf("%d",key*n);
    }
    //if(max=min)
    key=max-min;
    while(key>=0){
        key-=min;
    }
    key=abs(key)*n;*/
    printf("%d",max*n);
    free(a);
    return 0;
}
