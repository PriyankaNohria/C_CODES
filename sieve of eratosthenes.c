#include<stdio.h>
#include<stdbool.h>
#include<math.h>
void prime(int n)
{
 int i,j;
 char a[1000];
 memset(a,'1',sizeof(a));
 for(i=2;i<=sqrt(n)+1;i++)
 {
  for(j=i*i;j<=n;j=j+i)
  {
    a[j]='0';
  }
 }
 j=0;
 for(i=2;i<=n;i++)
 {
  if(a[i]=='1')
  {
   a[j]=i;
   j++;
  }
 }
 for(i=0;i<j;i++)
 printf("%d ",a[i]);
}
int main()
{
int n,len,i;
scanf("%d",&n);
prime(n);
return 0;
}
