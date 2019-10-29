#include<stdio.h>
int main(void)
{
    int x=256;
    printf("256:%d-%d-%d\n",x%10,(x%100-x%10)/10,(x-x%100)/100);
    return 0;
}