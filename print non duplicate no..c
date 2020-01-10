#include<stdio.h>
int main()
{
int num[50];
int size,largest=0;
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
printf("\n");
for(int j=0;j<=size1;j++)
{
if(num[j]==1)
 num[j]=1;
else
 num[j]=0;
printf("%d\t",num[j]);
}
return 0;
}
