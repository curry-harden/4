#include<stdio.h>
int main(void)
{
    int i,mark,a,b,c,d,e,n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d marks:",n);
    scanf("%d",&mark);
    for(i=1;i<n;i++){
        if(mark>=90){
            a++;
        }
        else{
            if(80<=mark<90){
                b++;
            }else{
                if(70<=mark<80){
                    c++;
                }else{
                    if(60<=mark<70){
                        d++;
                    }else{
                        e++;
                    }
                }
            }
        }
    }
    printf("A is %d\n",a);
    printf("B is %d\n",b);
    printf("C is %d\n",c);
    printf("D is %d\n",d);
    printf("E is %d\n",e);
       return 0;
}