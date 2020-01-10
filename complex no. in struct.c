#include<stdio.h>
typedef struct complex
{
int real;
int imag;
}COM;
int main()
{
COM c1,c2,sum,sub;
int option;
while(option!=5){
printf("enter the option : ");
scanf("%d",&option);
switch(option){
case 1:
scanf("%d%d",&c1.real,&c2.imag);
scanf("%d%d",&c2.real,&c1.imag);
break;
case 2:
printf("%d+%di\n",c1.real,c2.imag);
printf("%d+%di\n",c2.real,c1.imag);
break;
case 3:
sum.real=c1.real+c2.real;
sum.imag=c1.imag+c2.imag;
printf("the sum of COMPLEX NO. : %d+%di",sum.real,sum.imag);
break;
case 4:
sub.real=c1.real-c2.real;
sub.imag=c1.imag-c2.imag;
printf("the subtraction of COMPLEX NO. : %d+%di",sum.real,sum.imag);
printf("%d+%d\n",c1.real,c2.imag);
break;}
}while(option!=5)
return 0;
}
