#include<stdio.h>
int main()
{
int num[50];
int element,count=0,position;
scanf("%d",&element);
for(int i=0;i<element;i++)
{
scanf("%d",&num[i]);
}
for(int i=0;i<element;i++)
{
if(num[i]%2!=0)
//count++;
//}
printf("%d\t",num[i]);
position=i;
printf("%d\n",position); }
return 0;
}
