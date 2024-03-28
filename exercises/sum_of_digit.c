#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,sum=0,a;
    printf("enter number: ");
    scanf("%d",&a);
    for(i=1;i<6;i++)
    {
        int b=a%10;
        int c=a/10;
        a=c;
        sum=b;
        printf("%d",sum);
        
    }

}
