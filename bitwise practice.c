#include<stdio.h>
int main()
{
int num,i,j;
scanf("%d",&num);
scanf("%d",&i);
scanf("%d",&j);
if((!num&(1<<(i-1)))&&(num&(1<<(j-1)))||(num&(1<<(i-1)))&&(!num&(1<<(j-1))))
{
 num=num^(1<<(i-1));
 num=num^(1<<(j-1));
}
printf("%d",num);
return 0;
}
