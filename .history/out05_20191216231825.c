#include<stdio.h>
int main(void)
{
    int i,in,k,n,temp;
    int a[10];
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(k=0;k<n-1;k++){
        in=k;
        for(i=k+1;i<n;i++)
        if(a[i]<a[in])
        in=1;
        temp=a[in];
        a[in]=a[k];
        a[k]=temp;
    }
    for(i=0;i<n/)
}