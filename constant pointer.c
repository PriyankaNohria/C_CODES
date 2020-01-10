#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
int *const c=&a;
printf("%d",*c);
c=12;
printf("%d",*c);
return 0;
}
