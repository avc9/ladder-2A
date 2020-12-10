#include<stdio.h>
#include<math.h>
int main(){
    int lb,bh,lh;
    scanf("%d%d%d",&lb,&bh,&lh);
    int lbh=sqrt(lb*bh*lh);
    int ans=4*(lb*bh+bh*lh+lb*lh)/lbh;
    printf("%d",ans);
    return 0;
}