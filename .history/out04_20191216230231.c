#include<stdio.h>
int main(void)
{
    int d,w,i,n,o,m,u;
    int a[5];
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;w++){
        scanf("%d",&a[w]);
    }
    for(i=0;i<n-1;i++){
        m=i;
        for(o=1;o<n;o++){
            if(a[o]<=a[m]){
                m=o;
            }
        }
        d=a[o];
        a[o]=a[m];
        a[m]=d;
    }
    for(i=0;i<n;i++){
        printf("%d",a[u]);
    }
    return 0;
}