#include<stdio.h>
void main()
{
int a=0;
int b=0;
int c=0;
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
printf("enter c");
scanf("%d",&c);
if(a==b&&b==c&&c==a)
{
printf("Triangle is equilateral");
}
else if(a==b||b==c||c==a)
{
printf("Triangle is isocseles");
}
else
{
printf("Triangle is scaling");
}
return 0;
}
