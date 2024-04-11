#include<stdio.h>
void revnum(int *n);
int main()
{
    int n1,n;
    printf("enter number ");
    scanf("%d ",&n);
    revnum(&n);
    return 0;
}
void revnum(int *a){
    int b;
    while(*a!=0){
        b=*a%10;
        *a=*a%10;
        printf("%d",b);
    }
}