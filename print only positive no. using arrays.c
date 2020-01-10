#include<stdio.h>
int main()
{
int num[50];
int size;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&num[i]);
}
for(int i=0;i<size;i++)
{
if(num[i]>0)
printf("%d\t",num[i]);
}
return 0;
}
