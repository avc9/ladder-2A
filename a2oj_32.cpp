#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    long int v;
    scanf("%d %ld",&n,&v);
    int *k=(int*)malloc(n*sizeof(int));
    long int a[50][50];
    for(int i=0;i<n;i++){
        scanf("%d",&k[i]);
        for(int j=0;j<k[i];j++){
            scanf("%ld",&a[i][j]);
        }
    }
    int count=0;
    int *buffer=(int*)malloc(n*sizeof(int));
    int p=0;
    for(int i=0;i<n;i++){

        for(int j=0;j<k[i];j++){
            if(v>a[i][j]){
                count++;
                buffer[p]=i+1;
                p++;
                break;
            }

        }
    }
    printf("%d \n",count);
    for(int i=0;i<count;i++){
        printf("%d ",buffer[i]);
    }
    free(k);
    free(buffer);
    return 0;
}
