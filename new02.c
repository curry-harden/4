#include<stdio.h>
int main(void)
{
    int i,m=1,o=1,w;
    printf("%d%d",m,o);
    for(i=3;i<=20;i++){
    w=m+o;
    printf("%d",w);
    o=m;
    m=w;
    }
    return 0;
}