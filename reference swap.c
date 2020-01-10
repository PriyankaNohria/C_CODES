#include<stdio.h>
void tryswap(int*,int*);
int main()
{
int x,y;
scanf("%d%d",&x,&y);//5//7
tryswap(&x,&y);
printf("values after swap :%d\n%d",x,y);
return 0;
}
void tryswap(int*ptr_1,int*ptr_2)
{
*ptr_1=7;
*ptr_2=5;
}
