#include<stdio.h>
int main()
{
int n,i=2,c,count;
scanf("%d",&n);
for(count=1;count<=n;)
{
for(c=2;c<=i-1;c++)
{
if(i%c==0)
break;
}
if(c==i)
{
printf("%d\n",i);
count++;
}
i++;
}
return 0;
}

