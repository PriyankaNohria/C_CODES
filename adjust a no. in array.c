#include<stdio.h>
int main()
{
int num[50],size,position;
scanf("%d",&size);
scanf("%d",&position);
for(int i=0;i<size;i++)
{
scanf("%d",&num[i]);
}
for(int i=0;i<size;i++)
{
printf("%d\t",num[i]); }
for(int i=size+1;i>=position;i--)
{
num[i+1]=num[i];
printf("%d\t",num[i+1]);
}
return 0;
}
