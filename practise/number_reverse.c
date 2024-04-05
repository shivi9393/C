#include<stdio.h>
int main()
{
    int num1,num;
    printf("enter num: ");
    scanf("%d ",&num);
    while(num!=0){
        num1=num%10;
        num=num/10;
        printf("%d",num1);

    }

    return 0;
}