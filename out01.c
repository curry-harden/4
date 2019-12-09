#include<stdio.h>
int main(void)
{
    int n,i,p;
    for(i=1;i<=5;i++){
        for(n=1;n<=2;n++){
            for(p=1;p<=9;p++){
                if(p==i||p==10-i){
                    printf("w");
                }
                else{
                    printf(" ");
                }
            }
            if(n==2||p==9){
                printf("\n");
            }
        }
    }
    return 0;
}