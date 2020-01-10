#include<stdio.h>
int main()
{
int num=0;
scanf("%d",&num);
for(int i=0;i<32;i++)
{
num=num^(1<<i);
}
printf("%d",num);
return 0;
}
