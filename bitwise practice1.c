#include<stdio.h>
int main()
{
int n,i,count=0,j,x,y;
int s=8*sizeof(int);
int msb=1<<(s-1);
scanf("%d",&n);
msb=1<<31;
int num=n;
for(i=0;i<32;i++)
{
 if(num&msb)
   break;
 else
 {
   count++;
   num=num<<1;
 }
}
printf("%d\n",count);
x=n^(0x55555555&(~(-1<<32-count)));
y=n^(0xAAAAAAAA&(~(-1<<32-count)));
if(x==0||y==0)
  printf("Exist Pattern");
else
printf("Not Exist Pattern");
return 0;
}
