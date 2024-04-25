#include<stdio.h>
int a=0,b=0,r1,r2,r3,r4,r5;
void (){
    int x,y;

    printf("enter first numbers:  ");
    scanf("%d %d",&x,&y);
}
void  add(){
  r=x+y;
    printf("%d ",r);
}
void sub(){
r=x-y;
printf("%d",r);
}
void mul(){
    r=x*y;
    printf("%d",r);
}
void div(){
    r=x/y;
    printf("%d",r);
}
int main(){
    int c;
    printf("enter 1 for sum ");
    printf("enter 2 for diffrence ");
    printf("enter 3 for multiplication ");
    printf("enter 4 for division ");
    printf("enter your choise ");
    scanf("%d",&c);
    switch(c){
        case 1:
        sum();
    
    case 2:
    sub();
    case 3:
    mul();

}}