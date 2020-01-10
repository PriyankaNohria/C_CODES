#include<stdio.h>
int swap(int n)
{
 int x=(n>>1)&0x55555555;//10101 pattern
 int y=(n<<1)&0xAAAAAAAA;//01010 pattern
 return x|y;
}
int main()
{
 int num;
 scanf("%d",&num);
 int n=swap(num);
 printf("%d",n);
 return 0;
}
