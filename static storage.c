#include<stdio.h>
int main()
{
static_();
static_();
}
void static_()
{
static int i;
{
static int i=1;
printf("%d\n",i);
i++;
}
printf("%d\n",i);
}
