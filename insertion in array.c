#include<stdio.h>
int main()
{
int arr[50],size;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
int pos;
scanf("%d",&pos);
size=size+1;
for(int i=size-2;i>=pos;i--)
{
arr[i+1]=arr[i];
}
arr[pos]=100;
for(int i=0;i<size;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}
