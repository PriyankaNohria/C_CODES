#include<stdio.h>
void leading_zero(int num);
int main()
{
 int num;
scanf("%d",&num);
leading_zero(num);
return 0;
}
void leading_zero(int n)
{
int count=0;
int size=8*sizeof(int);
int MSB=1<<size-1;
for(int i=0;i<size;i++)
{
if(n&MSB) {
break; }
else{
count++;
n=n<<1;
}
}
printf("%d",count);
}
