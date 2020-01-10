#include<stdio.h>
int fact(int);
int main()
{
int n,f,i;
float result=0.0;
printf("enter the value of n :");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
f=fact(i);
result +=1/(float)f;
}
printf("%.1f",result);
return 0;
}
int fact(int num) {
int f=1,i;
for(i=num;i>=1;i--)  {
f=f*i;  }
return f;
}
