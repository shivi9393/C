#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1,n2,opt=0;
    printf("enter first no: ");
    scanf("%d",&n1);
    printf("enter 2nd no: ");
    scanf("%d",&n2);
    if (n1>n2){
        opt=opt+1;
    }
    else if (n2>n1){
        opt=opt+2;
    }
    else{
        opt=opt+3;
    }
    switch (opt)
    {
    case 1:{
        printf("%d IS GREATER THAN %d",n1,n2);
    break;}
    case 2:{
        printf("%d IS GREATER THAN %d",n2,n1);
    break;}
    case 3: {
        printf("%d AND %d ARE EQUAL",n1,n2);break;
    }
    
    
    }
    return 0;
}
