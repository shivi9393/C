#include<stdio.h>
#include<math.h>
int main()
{
    int c;
    float area,breadth,length,base,height,r;
    printf("enter 1 for rectangle \n");
    printf("enter 2 for triangle \n");
    printf("enter 3 for circle\n");

printf("enter your choise: ");
scanf("%d",&c);
switch (c){
    case 1: 
    printf("enter length and breadth: ");
    scanf("%f %f ",&length,&breadth);

    area =length*breadth;
    printf("%.2f",area);
    break;

    case 2:
    printf("enter base and height of triangle: ");
    scanf("%f %f ",&height,&base );
    area =0.5*base*height;
    printf("%.2f",area);
    break;



    case 3:
    printf("enter radius of circle: ");
    scanf("%f ",&r); 
    area=3.14*r*r;
    printf("%.2f",area);

    break;




}
    return 0;
}