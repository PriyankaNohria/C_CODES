#include<stdio.h>
int main()
{
int num[50];
int size,largest,temp;
int secondlargest;
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
secondlargest=num[0];
for(int i=1;i<size;i++)
{
if(secondlargest<num[i]&&num[i]<largest)
secondlargest=num[i];
}
printf("%d",secondlargest);
return 0;
}
