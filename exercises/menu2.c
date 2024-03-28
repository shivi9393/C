#include<stdio.h>
void main()
{
    int option,num1,prime,odd,i,fact=1;
    printf("enter number :");
    scanf("%d",&num1);
    printf("enter your choice:");
    printf("\noption 1 for factorial");
    printf("\noption 2 prime or not prime");
    printf("\noption 3 odd or even");
    printf("\noption 4 for exit");
    printf("\nenter your option:");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        {
            for(i=1;i<=num1;++i)
            {
                fact*=i;
            }
        printf("factorial of the given number is:%d",fact);
        break;
        }
        case 2:
        {
            for(i=2;i<num1;i++)
            {
                num1=num1%i;
                if(num1==0)
                {
                    printf("not prime");
                    break;
                }
                else
                {
                    printf("prime");
                }
            }
            break;
        }
        case 3:
        {
            if(num1%2==0)
            {
                printf("even");
            }
            else
            {
                printf("odd");
            }
            break;
        }
        case 4:
        {
            break;
        }

    }
}