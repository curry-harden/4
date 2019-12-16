#include<stdio.h>
int main(void)
{
    int d,i,n,o,m;
    int a[5];
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        m=i;
        for(o=i+1;o<n;o++){
            if(a[o]<=a[m]){
                m=o;
            }
        }
        d=a[o];
        a[o]=a[m];                           
        a[m]=d;
    }
    for(i=0;i<n;i++){ 
        printf("%d",a[i]);
    }
    return 0;
}