#include<stdio.h>
int main()
{
int floor[50],bookfloor[50],i=1;
int size;
while(floor[i]!=-1)
{
scanf("%d",&floor[i]);
i++;
}
scanf("%d",&size);
for(int i=1;i<size;i++)
{
bookfloor[floor[i]]++;
printf("%d",bookfloor[floor[i]]);
}
return 0;
}
