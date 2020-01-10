#include<stdio.h>
int main()
{
int num[50],largest=0;
int size;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&num[i]);
}
largest=num[0];
for(int i=1;i<size;i++)
{
if(largest<num[i])
largest=num[i];
}
int count=0;
int size1=largest;
for(int j=0;j<=size1;j++)
{
for(int i=0;i<size;i++)
{
if(j==num[i])
count++;
}
printf("%d\t",count);
count=0;
}
return 0;
}
