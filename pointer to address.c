#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
const int *c=&a;
printf("%d\n",*c);
c=&b;
printf("%d",*c);
return 0;
}
