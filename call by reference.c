#include<stdio.h>
void try_this(int*,int*);
int main()
{
int x,y;
scanf("%d%d",&x,&y);
try_this(&x,&y);
printf("%d\n%d",x,y);
return 0;
}
void try_this(int*ptr_1,int*ptr_2)
{
*ptr_1=0;
*ptr_2=0;
}
