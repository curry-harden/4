#include<stdio.h>
int main(void)
{
    int w,i,n,o,m=0;
    int a[o];
    printf("Enter n:");
    scanf("%d",&n);
    for(w=1;w<=n;w++){
        scanf("%d",a)
    }
    for(i=1;i<n;i++){
        for(o=1;o<n;o++){
            if(a[o]<a[m]){
                m=o;
            }
        }
    }
}