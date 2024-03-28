#include<stdio.h>

int main(int argc, char const *argv[])
{
    int no,fact=1,i;
    printf("enter a numbeer: ");
    scanf("%d", &no);
    for(i=1;i<=no;++i)
            {
                fact*=i;
            }
        printf("factorial of the given number is:%d",fact);

    return 0;
}
