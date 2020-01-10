#include<stdio.h>
int main()
{
int num[50];
int size,i;
scanf("%d",&size);
int large=0;

for(i=0;i<size;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<size;i++)
{
printf("%d\n",num[i]);
}
large=num[0];
for(i=1;i<size;i++)
if(large<num[i]){
 large=num[i]; }
printf("largest No. : %d",large);
return 0;
}

