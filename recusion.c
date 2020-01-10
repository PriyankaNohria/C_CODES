#include<stdio.h>
int fact(int n);
int main()
{
int n,factorial;
scanf("%d",&n);
factorial=fact(n);
printf("%d",factorial);
return 0;
}
int fact(int n)
{
if(n==1)
return 1;
else
return(n*fact(n-1));
}












