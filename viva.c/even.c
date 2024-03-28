//wap to count even no in between 1 and 200
#include<stdio.h>
int main()
{
    int i,ce=0,su;
    for (i=1;i<=200;i++){
        if(i%2==0){
            ce=ce+1;
            su=su+i;
        }
    }
    printf("total no of even numbers between 1 and 200 : %d",ce);
    printf("\nsum of even numbers : %d",su);

    return 0;
}
