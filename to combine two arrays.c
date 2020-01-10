#include<stdio.h>
int main()
{
int num1[50],num2[50],num3[50];
int size1,size2,i=0;
printf("enter the size1");
scanf("%d",&size1);
for(int i=0;i<size1;i++)
{
scanf("%d",&num1[i]);
}
printf("enter the size2");
scanf("%d",&size2);
for(int i=0;i<size2;i++)
{
scanf("%d",&num2[i]);
}
int size3=size1+size2;
for(int j=0;j<size1;j++)
{
num3[j]=num1[j];
printf("%d\t",num3[j]); }
for(int j=size2;j<size3;j++)
{
num3[j]=num2[i];
printf("%d\t",num3[j]);
i++;
}
return 0;
}
