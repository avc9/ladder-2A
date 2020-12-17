#include<stdio.h>
#include<stdlib.h>
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int *a=(int*)malloc(m*sizeof(int));
    int min;
    for(int i=0;i<m;i++)
        scanf("%d",&a[i]);
    
    bubbleSort(a,m);
   
    int min_diff=10000;
    int lower=0,upper=n-1;
    while(upper<m){
        if(min_diff>a[upper]-a[lower]){
            min_diff=a[upper]-a[lower];
            
            
        }
        lower++;
        upper++;
    }
    printf("%d",min_diff);
    free(a);
    return 0;
}
