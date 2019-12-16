#include<stdio.h>
int main(void)
{
    int i,n,o,m=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(o=1;o<n;o++){
            if(o<m){
                m=o;
            }
        }
    }
}