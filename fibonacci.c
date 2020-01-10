#include<stdio.h>
int main()
{
int n,first=0,second=1,res=0;
scanf("%d",&n);
printf("%d\t%d\t",first,second);
for(int i=0;i<n-2;i++)
{
res=first+second;
printf("%d\t",res);
first=second;
second=res;
}
printf("\n%d",res);
return 0;
}
