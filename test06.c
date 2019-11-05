#include<stdio.h>
int main(void)
{
    int k;
    double w;
    printf("Enter k:");
    scanf("%d",&k);
    if(k<=50){
    w=0.53*k;
    }
    else{
    w=26.5+0.58*(k-50);
    }
    printf("cost is %lf\n",w);
    return 0; 
}