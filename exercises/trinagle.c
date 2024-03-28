#include<stdio.h>

int main(int argc, char const *argv[])
{
    int s1,s2,s3;
    printf("enter 1st side: ") ;
    scanf("%d",&s1);   
    printf("enter 2nd side: ") ;
    scanf("%d",&s2);   
    printf("enter 3rd side: ") ;   
    scanf("%d",&s3);
    if(s1=s2=s3){
        printf("equilateral");
    }   
    else if( (s1=s2)||(s1=s3)){
        printf("isosceles");

    }
    else{
        printf("righttriangle");
    }
    return 0;
}
