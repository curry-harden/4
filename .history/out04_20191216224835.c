#include<stdio.h>
int main(void)
{
    int d,w,i,n,o,m=0,u;
    int a[10];
    printf("Enter n:");
    scanf("%d",&n);
    for(w=0;w<n;w++){
        scanf("%d",&a[w]);
    }
    for(i=0;i<n-1;i++){
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