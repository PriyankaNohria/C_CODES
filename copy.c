#include<stdio.h>
int main()
{
int num1[50],num2[50];
int size;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&num1[i]);
}
for(int i=0;i<size;i++)
{
num2[i]=num1[i];
}
for(int i=0;i<size;i++) {
printf("num1[i]=%d\tnum2[i]=%d\n",num1[i],num2[i]); }
return 0;
}
