#include<stdio.h>
struct number
{
int num;
int sum;
}d[100];
int main()
{
int n,b[100]={0},rem;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&d[i].num);
}
for(int i=0;i<n;i++)
{
d[i].sum=0;
while(d[i].num!=0)
{
rem=d[i].num%10;
d[i].sum=d[i].sum+rem;
d[i].num=d[i].num/10;
}
}
for(int i=0;i<n;i++)
{
b[d[i].sum]++;
}
for(int i=0;i<n;i++)
{
if(b[d[i].sum]>1){
printf("%d\n",d[i].sum);
b[d[i].sum]=0;
}
}
return 0;
}
