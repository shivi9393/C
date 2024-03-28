#include<stdio.h>
int main(int argc, char const *argv[])
{
    float c,f;
    printf("enter temp in farenhiet: ");
    scanf("%f",&f);
    c=0.56*(f-32);
    printf("temp oin celcius: %f",c);
    return 0;
}
