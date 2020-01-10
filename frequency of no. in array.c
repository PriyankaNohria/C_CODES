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
int count=0;
for(int j=0;j<size;j++){
for(int i=0;i<size;i++)
{
if(num[i]%j==0)
count++;
}
printf("%d\t",count);
}
return 0;
}
