#include<stdio.h>
int fact(int);
int main()
{
int n,num,deno,i;
float sum=0.0;
printf("enter the value of n : ");
scanf("%d",&n);
for(i=1;i<=n;i=i+1) {
num=pow(i,i);
deno=fact(i);
sum=(float)num/deno+sum;
}
printf("%.2f",sum);
return 0;
}
int fact(int n)
{
int f=1,i;
for(i=n;i>=1;i=i-1) {
f=f*i;
}
return f;
}
