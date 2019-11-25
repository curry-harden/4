#include<stdio.h>
int main(void)
{
    int w,m,k;
    for(w=1;w<=100;w++){
        for(m=1;m<=100;m++){
            for(k=1;k<=100;k++);
    if(w*3+5*m+1/3*k==100&&w+m+k==100){
        printf("w is %d,m is %d,k is %d",w,m,k);
    }
    return 0;
}