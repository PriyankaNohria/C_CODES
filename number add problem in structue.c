#include<stdio.h>
struct number
{
int num;
}d[100];
int main()
{
int arr[50],n,rem,sum=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&d[i].num);
}
for(int i=0;i<n;i++)
{
sum=0;
while(d[i].num!=0){
rem=d[i].num%10;
sum=sum+rem;
d[i].num=d[i].num/10;
}
arr[i]=sum;
}
for(int i=0;i<n;i++)
{
if(arr[i]==0){
continue;
}
for(int j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
printf("%d\n",arr[i]);
arr[j]=0;
}
}
}
return 0;
}
