#include<stdio.h>
int main(void)
{
    int i,n,k;
    double w=0,m=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
     m=m*k;
     w=w+1.0/m;
    }
    printf("w is %.6lf",w);
    return 0;
}