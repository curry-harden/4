#include<stdio.h>
int main(void)
{
    int i,n,w=0,m=1,k;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=i;k++){
        m=m*k;
        }
        w=m+w; 
    }
    printf("w is %d",w);
    return 0;
}