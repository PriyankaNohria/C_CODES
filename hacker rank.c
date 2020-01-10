#include<stdio.h>
int main()
{
int num,i,factor=0,rem;
scanf("%d",&num);//10
for(i=1;i<=num;i=i+1)
{
rem=num%i;
if(rem==0)
{
factor=(factor*10)+rem;
//printf("%d",factor);
}
// scanf("%d",&num);
}
 printf("%d",factor);
return 0;
}
