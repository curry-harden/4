#include<stdio.h>
int main(void)
{
    int i,k,w;
    printf("Enter i:");
    scanf("%d",&i);
    printf("Enter k:");
    scanf("%d",&k);
    if(i<=10){
        if(k<=5){
            w=2*i;
        }else{
            w=2*i+k/5*2;
        }
    }else
    {if(k<=5){
        w=20+3*(i-10);
    }else{
        w=20+3*(i-10)+k/5*2;
    }
    }
    printf("%d",w);
    return 0;
}