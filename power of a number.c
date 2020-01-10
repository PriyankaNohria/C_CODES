#include<stdio.h>
int power(int m,int n)
{
 if(n==0)
  return 1;
 int temp=power(m,n/2);
 if(n%2==0)
 return temp*temp;
 else
 return m*temp*temp;
}
int main()
{
 int m,n;
 scanf("%d",&m);
 scanf("%d",&n);
 int res=power(m,n);
 printf("%d raise to power %d is : %d",m,n,res);
 return 0;
}
