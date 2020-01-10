#include<stdio.h>
int main()
{
int num[50];
int size,count=0;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&num[i]);
}
for(int i=0;i<size;i++)
{
if(num[i]<0)
count++;
}
printf("%d",count);
return 0;
}
