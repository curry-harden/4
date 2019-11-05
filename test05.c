#include<stdio.h>
#include<math.h>
double fact(int n);
int main(void)
{
    int n,i;
    double result;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        result=fact(i);
        printf("%lf",result);
    }
    return 0;
}

double fact(int n)
{
    int i;
    double l;
    l=1;
    for(i=1;i<=n;i++){
        l=pow(3,n);
    }
    return l;
}