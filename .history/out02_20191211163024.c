#include<stdio.h>
int main(void) 
{
    int w=1,i;
    int a [5];
    for(i=;i<=5;i++){
        scanf("%d",&a[i]);
        if(a [i]<=a [w]){
         w=i;
        }
    }
    printf("%d,a [w]");
    return 0;
}