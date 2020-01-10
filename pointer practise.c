#include<stdio.h>
int try(int*,int*);
int main()
{
int a,b,result;
printf("before swaping the values are : ");
scanf("%d%d",&a,&b);
result=try(&a,&b);
printf("after swaping the values are :  %d\n%d",a,b);
return 0;
}
int try(int*a,int*b)
{
int result,temp;
temp=*a;
*a=*b;
*b=temp;
return result;
}

