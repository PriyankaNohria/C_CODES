#include<stdio.h>
int main()
{
int num[50];
int size;
//scanf("%d",&num);
scanf("%d",&size);
int large=0;

for(int i=0;i<size;i++)
{
scanf("%d",&num[i]);
}
large=num[0];
for(int i=1;i<size;i++)
if(large<num[i]){
 large=num[i]; }
printf("%d",large);
return 0;
}

