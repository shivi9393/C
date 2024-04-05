#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("enter coordinates of a(x,y) :");
    scanf("%d %d ",&x1,&y1);
    printf("enter coordinates of a(x,y) :");
    scanf("%d %d ",&x2,&y2); 
    printf("enter coordinates of a(x,y) :");
    scanf("%d %d ",&x3,&y3);
    if((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2)){
        printf("straight line");
    }
    else{
        printf("not a straight line ");
    }
    return 0;
}