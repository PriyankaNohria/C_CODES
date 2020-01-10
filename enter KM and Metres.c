#include<stdio.h>
typedef struct
{
int km;
int m;
}DIS;
DIS add(DIS,DIS);
DIS sub(DIS,DIS);
int main()
{
DIS d1,d2,d3,d4;
int option;
while(option!=5)
{
scanf("%d",&option);
switch(option)
{
case 1:
printf("enter the first distance in km and m : ");
scanf("%d%d",&d1.km,&d1.m);
printf("enter the second distance in km and m : ");
scanf("%d%d",&d2.km,&d2.m);
break;
case 2:
printf("enter the first distance in km and m %d and %d\n",d1.km,d1.m);
printf("enter the first distance in km and m %d and %d\n",d2.km,d2.m);
break;
case 3:
d3=add(d1,d2);
printf("the sum is %dkm and %dm",d3.km,d3.m);
break;
case 4:
d4=sub(d1,d2);
printf("the difference is %dkm and %dm",d4.km,d4.m);
break;
}
}
return 0;
}
DIS add(DIS d1,DIS d2)
{
DIS sum;
sum.km=d1.km+d2.km;
sum.m=d1.m+d2.m;
if(sum.m>=1000)
{
sum.m=sum.m%1000;
sum.km=1+sum.km;
}
return sum;
}
DIS sub(DIS d1,DIS d2)
{
DIS sub;
if(d1.km>d2.km){
sub.km=d1.km-d2.km;
sub.m=d1.m-d2.m;}
if(d2.km>d1.km){
sub.km=d2.km-d1.km;
sub.m=d2.m-d1.m;}
if(sub.m<0)
{
sub.km=sub.km-1;
sub.m=sub.m+1000;
}
return sub;
}
