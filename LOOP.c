#include<stdio.h>
int main()
{
int num,a;
printf("enter the number");
scanf("%d",&num);
for(int i=1;i<=10;i++)
{
    a=i*num;
printf("%d*%d=%d\n",num,i,a);
}
return 0;
}
