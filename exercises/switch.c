#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a,opt;
    printf("\nSelect your choise: ");
    printf("\n1 for Monday");
    printf("\n2 for Tuesday");
    printf("\n3 for Wednesday");
    printf("\n4 for Thursday");
    printf("\n5 for Friday");
    printf("\n6 for Saturday");
    printf("\n7 for Sunday");
    printf("\nEnter Your choise:  ");
    scanf("%d",&opt);
    switch(opt){
        case 1:{printf("MONDAY");
        break;}
        case 2:{printf("TUESDAY");
        break;}
        case 3:{printf("WEDNESDAY");
        break;}
        case 4:{printf("THURSDAY");
        break;}
        case 5:{printf("FRIDAY");
        break;}
        case 6:{printf("SATURDAY");
        break;}
        case 7:{printf("SUNDAY");
        break;}
    }
    return 0;
}
