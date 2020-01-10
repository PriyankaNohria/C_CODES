#include<stdio.h>
int fibbo(int n);
int main()
{
int n,res;
scanf("%d",&n);
for(int i=0;i<n;i=i+1) {
res=fibbo(i);
printf("%d\t",res); }
return 0;
}
int fibbo(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
return (fibbo(n-1)+fibbo(n-2));
}
