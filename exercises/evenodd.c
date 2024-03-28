#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,ce=0,co=0,sum1=0,sum2=0;
    for(i=1;i<=200;i++){
        if(i%2==0){
            ce=ce+1;
            sum1=sum1+i;
        }
        else{
            co=co+1;
         sum2=sum2+i;
        }
    }
    printf("no of odd: %d",co);
    printf("\nno of even: %d",ce);
    printf("\nsum of odd: %d",sum2);
    printf("\nsum of even: %d",sum1);
    return 0;
}
