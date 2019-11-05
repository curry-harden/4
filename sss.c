#include<stdio.h>
int main(void)
{
    int i,t;
    printf("Enter i:");
    scanf("%d",&i);
    if(i<0){
        t=-i;
    }
    else{
        t=i;
    }
    printf("%d",t);
    return 0;
}