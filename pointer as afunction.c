#include<stdio.h>
int* add(int*x,int*y);
int main()
{
int x=5,y=7;
int *c=add(&x,&y);
printf("%d",*c);
return 0;
}
int* add(int*a,int*b)
{
int res=*a+*b;
return &res;
}
