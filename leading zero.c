#include<stdio.h>//program to count leading zeroes
int main()
{
int num=10;
int count=0;
int size=8*sizeof(int);
int MSB=1<<size-1;
for(int i=0;i<size;i++)
{
if(num&MSB)
{
("BREAK");
}
else
{
count++;
num=num<<1;
}
}
printf("number of leading zeroes = %d",count++);
return 0;
}
