#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n1,n2,opt,mul,sum,sub,div,sqrt;
    printf("enter 1st no.: ");
    scanf("%d",&n1);
    printf("enter 2nd no.: ");
    scanf("%d",&n2);
    printf("\nselct your choise: ");
    printf("\n 1 FOR ADDITION");
    printf("\n 2 FOR SUBTRACTION");
    printf("\n 3 FOR MULTIPLICATION");
    printf("\n 4 FOR DIVISION ");
    printf("\n 5 TO SOLVE POWER");
    printf("\n ENTER YOUR CHOISE:");
    scanf("%d",&opt);
    switch(opt){
case 1:{printf("THE SUM OF %d AND %d IS: %d ",n1,n2,n1+n2);break; }
case 2:{printf("THE DIFFERENCE OF %d AND %d IS: %d ",n1,n2,n1-n2);break;}
case 3:{printf("THE PRODUCT OF %d AND %d IS: %d ",n1,n2,n1*n2);break;}
case 4:{printf("THE DIVISION OF %d AND %d IS: %d ",n1,n2,n1/n2);break;}
case 5:{printf("%d RAISE TO THE POWER %d IS: %.2lf ",n1,n2,pow(n1,n2));break;}

    }
    
    return 0;

}
