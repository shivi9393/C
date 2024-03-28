#include<stdio.h>
int main(int argc, char const *argv[])
{
    int opt;
    printf("enter number: ");
    scanf("%d",&opt);
    switch (opt % 2)
    {
    case 0:{
    printf("EVEN");
        break;}
    case 1:{
        printf("ODD");
        break;}

    }
    return 0;
}
