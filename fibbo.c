#include<stdio.h>
int fibbo(int n);
int main()
{
int n,result;
scanf("%d",&n);
result=fibbo(n);
printf("%d",result);
return 0;
}
int fibbo(int n)
{
if(n<=1)
return n;
else
return (fibbo(n-1)+fibbo(n-2));
}

