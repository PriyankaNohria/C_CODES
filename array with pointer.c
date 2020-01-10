#include<stdio.h>
int main()
{
int size,arr[50];
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
int ptr=arr;
printf("%d\n",*arr);
//arr++;
printf("%d",*(arr+1));
return 0;
}
