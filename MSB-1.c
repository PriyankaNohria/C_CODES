#include<stdio.h>
int main()
{
int num=0;
scanf("%d",&num);
int size=8*sizeof(int);
int MSB=1<<size-1;
if(num&MSB)
{
printf("ON");
}
else
{
printf("OFF");
}
return 0;
}
