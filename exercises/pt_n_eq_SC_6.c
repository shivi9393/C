#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,z,ng,pt;
printf("enter any number: ");
scanf("%d",&n);
switch ( n > 0)
{

case 1:{printf("NUMBER IS POSITIVE");break;}
    case 0 :{switch(n<0){
    case 0:{printf("NUMBER IS zero");break;}
    case 1: {printf("NUMBER IS NEGATIVE");break;}
    }
    }
    
}
    return 0;
}
