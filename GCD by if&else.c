#include<stdio.h>
int main()
{
int a,b,rem,x,y;
printf("enter the a : ");
scanf("%d",&a);
printf("enter the b : ");
scanf("%d",&b);
if(a>b)
{
x=a;
y=b;
}
else {
x=b; //9
y=a;  //3
}
while(y) { //7
rem=x%y;   //0
x=y;  //7
y=rem;//0
}
printf("%d",x);
return 0;
}
