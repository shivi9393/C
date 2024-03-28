#include<stdio.h>
int main()
{
    int b,a,th,i=1,ov;
    while(i<=10){    
    printf("\nenter total hours: ");
    scanf("%d",&th);
    i=i+1;
    if (th>40){
        a=th-40;
        b=a*12;
    printf("overtime pay: %d\n",b);

    }
    else{
        printf("no overtime done\n");
    }

    }

    return 0;
}
