#include<stdio.h>
int main()
{
char name_[35][20];
int size;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
fflush(stdin);
gets(name_[i]);
}
for(int i=0;i<size;i++)
{
puts(name_[i]);
}
return 0;
}
