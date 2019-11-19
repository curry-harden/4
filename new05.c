#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,n,m=0,w=1,k;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    for(k=i;k>=1;k--){
        m=m+2*pow(10,k-1);
    }
      w=w+m;
    }
    printf("m is %d",m);
    return 0;
}