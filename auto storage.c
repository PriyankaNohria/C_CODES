#include<stdio.h>
int main()
{
auto num=20;
{
auto num=60;
printf("%d\n",num);
}
printf("%d",num);
return 0;
}
