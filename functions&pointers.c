#include<stdio.h>
int* add(int*a,int*b);
void fun();
int main()
{
int a=2,b=4;
int* c=add(&a,&b);
fun();
printf("%d",*c);
return 0;
}
int* add(int*a,int*b)
{
int *res=(int*)malloc(sizeof(int));
*res=*a+*b;
return res;
}
void fun()
{
printf("hello");
}
