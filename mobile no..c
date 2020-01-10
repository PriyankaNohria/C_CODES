#include<stdio.h>
int main()
{
int arr[50];
int size;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<size;i++)
{
if(arr[i]==0)
i=i+1;
for(int j=i+1;j<size;j++)
{
if(arr[i]==arr[j])
 arr[j]=0;
}
//printf("%d\t",arr[i]);
}
for(int i=0;i<size;i++)
{
if(arr[i]==0)
i=i+1;
printf("%d\t",arr[i]);
}
return 0;
}
