#include<stdio.h>
int main()
{
    int k=1,row,space,digit;
    for(row=1;row<=4;row++){
        for(space=1;space<=4-row;space++){
            printf("  ");
        }
        for(digit=1;digit<=row;digit++){
            printf("%d  ",k++);
        }
        printf("\n");
    }
    return 0;
}