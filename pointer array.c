#include<stdio.h>
int main()
{
int size1,size2;
int arr1,arr2;
scanf("%d",&size1);
for(int i=0;i<size1;i++)
{
scanf("%d",&arr1);
}
scanf("%d",&size2);
for(int i=0;i<size2;i++)
{
scanf("%d",&arr2);
}
int*ptr[]={arr1,arr2};
printf("%d",*ptr[0]);
return 0;
}
