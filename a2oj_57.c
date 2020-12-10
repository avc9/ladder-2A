#include<stdio.h>
#include<math.h>
int main(){
    float lb,bh,lh;
    scanf("%f%f%f",&lb,&bh,&lh);
    float lbh=1.0*sqrt(lb*bh*lh);
    float ans=4.0*(lb*bh+bh*lh+lb*lh)/lbh;
    printf("%0.0f",ans);
    return 0;
}
