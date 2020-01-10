#include<stdio.h>
int main()
{
int num=0;
int count=0;
int size=8*sizeof(int);
printf("enter num");
scanf("%d",&num);
for(int i=0;i<size;i++)
{
if(1&num)
{
("BREAK");
}
else
{
count++;
num=num>>1; }
}
printf("%d",count++);
return 0;
}
