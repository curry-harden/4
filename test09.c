#include<stdio.h>
#include<math.h>

int main(void)
{
    int i,n;
    double d,e,k=0,p;
    d=1;
    printf("Enter e:");
    scanf("%lf",&e);
    for(i=1;abs(d)>=e;i++){
        d=pow(-1,i+1)/(2.0*i-1);
        k=k+d;
    }
    p=4*k;
    printf("p is %lf",p);
    return 0;
}