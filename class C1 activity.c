#include<stdio.h>
int main()
{
int arr1[50],arr2[50],sum1=0,sum2=0,sum3;
int size1;
printf("enter the size1");
scanf("%d",&size1);
for(int i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
sum1=sum1+arr1[i];
}
int size2;
int single=0,rem2;
printf("enter the size2");
scanf("%d",&size2);
for(int i=0;i<size2;i++)
{
scanf("%d",&arr2[i]);
sum2=sum2+arr2[i];
}
int rem1,even=0,odd=0;
if(sum1==sum2)
{
while(sum1!=0) {
rem1=sum1%10;
if(rem1%2==0) {
even++; }
else {
odd++; }
sum1=sum1/10;
}
printf("even=%d\todd=%d",even,odd);
}
else
{
int sum3=sum1+sum2;
while(single<10)  {
single=0;
while(sum3!=0)
{
rem2=sum3%10;
single=single+rem2;
sum3=sum3/10;
} }
printf("single digit is : %d",single);
}
return 0;
}
