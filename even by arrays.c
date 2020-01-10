#include<stdio.h>
int main()
{
int num[50];
int elements,count=0;
scanf("%d",&elements);
for(int i=0;i<elements;i++)
{
scanf("%d",&num[i]);
}
for(int i=0;i<elements;i++)
{
if(num[i]%2==0)
count++;
}
printf("%d",count);
return 0;
}
