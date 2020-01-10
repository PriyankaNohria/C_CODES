#include<stdio.h>//macro with argument
#define AREA(x) (3.14*x*x)
#define PERIMETER(y) (2*3.14*y)
int main()
{
float r=0.0;
printf("enter the value of radius");
scanf("%f",&r);
printf("%.2f\n",AREA(r));
printf("%.2f",PERIMETER(r));
return 0;
}
