#include<stdio.h>
int main(int argc, char const *argv[])
{
    float c;
    int h,te,a,b,cp;
    printf("enter hardness of steel: ");
    scanf("%d",&h);
    printf("enter carbon content: ");
    scanf("%f",&c);
    printf("enter tensile strength: ");
    scanf("%d",&te);
    if(h>50){
        a==1;
    }
    else if(c<0.7){
        b==1;
    }
    else if(te>5600){
        cp==1;
    }
if(a==1&&b==1&&cp==1){
    printf("grade 10 steel ");
}
else if (a==1 && b==1){
printf("grade 9 steel");
}
else if (b==1 && cp==1){
    printf("grade 8 steel ");
}
else if(a==1 && cp==1){
    printf("grade 7 steel");
}
else if (a==1 || b==1 || cp==1){
    printf("grade 6 steel");
}
else {
    printf("grade 5 steel");
}


    return 0;
}
