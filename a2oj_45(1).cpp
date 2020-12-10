#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    scanf("%d",&n);
    int *x_cordi=(int*)malloc(n*sizeof(int));
    int *y_cordi=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&x_cordi[i]);
        scanf("%d",&y_cordi[i]);
    }
    /*for(int i=0;i<n;i++){
        printf("%d ",x_cordi[i]);
        printf("%d",y_cordi[i]);
        printf("\n");
    }*/
    int X_super,Y_super,count=0;
    for(int i=0;i<n;i++){
        X_super=x_cordi[i];
        Y_super=y_cordi[i];
        int up=0,down=0,left=0,right=0;
        for(int j=0; j<n;j++){
            if(X_super<x_cordi[j]&&Y_super==y_cordi[j]){
                right++;
                //printf("right \n");
            }
            if(X_super>x_cordi[j]&&Y_super==y_cordi[j]){
                left++;
                //printf("left \n");
            }
            if(X_super==x_cordi[j]&&Y_super<y_cordi[j]){
                up++;
                //printf("up \n");
            }
            if(X_super==x_cordi[j]&&Y_super>y_cordi[j]){
                down++;
                //printf("down \n");
            }
            if(up>=1&&down>=1&&left>=1&&right>=1){
                break;
            }
        }
        if(up>=1&&down>=1&&left>=1&&right>=1)
            count++;
    }
    printf("%d",count);
    free(x_cordi);
    free(y_cordi);
    return 0;
}
