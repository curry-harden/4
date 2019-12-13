#include<stdio.h>
#define s 5
int curry(int a[],int n);
int main(void)
{
    int i,n,max;
    int a[i];
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    max=curry(a,s);
    printf("big is %d",max);
    return 0;

}




int curry(int a[],int n)
{
    int i,max;
    max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>=a[0]){
            max=a[i];
        }
    }
    return max;
}