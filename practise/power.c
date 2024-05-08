#include<stdio.h>
float raised(float a,float b){
    if(b==0){
        return 1;
    }
    else if(b>0){
        return a * raised (a,b-1);
    }
    else{
        return 1/(a*raised(a,-b-1));
    }
}
int main()
{
    int a,b;
    double c;
    printf("enter base: ");
    scanf("%d",&a);
    printf("enter power: ");
    scanf("%d",&b);
    c= raised(a,b);
    printf(" result : %.lf",c);

    
    return 0;
}