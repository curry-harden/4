#include<stdio.h>
int main(void)
{
    int d,w,i,n,o,m=,u;
    int a[10];
    printf("Enter n:");
    scanf("%d",&n);
    for(w=1;w<=n;w++){
        scanf("%d",&a[w]);
    }
    for(i=1;i<n;i++){
        for(o=0;o<n-1;o++){
            if(a[o]<a[m]){
                m=o;
            }
        }
        d=a[o];
        a[o]=a[m];
        a[m]=d;
    }
    for(u=0;u<n;u++){
        printf("%d",a[u]);
    }
    return 0;
}