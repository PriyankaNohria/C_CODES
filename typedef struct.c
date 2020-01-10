#include<stdio.h>
typedef struct
{
int x;
char y;
}STUDENT;
int main()
{
STUDENT s1;
s1.x;
s1.y;
scanf("%d",&s1.x);
scanf("\n%[^\n]",s1.y);
printf("%d\n",s1.x);
printf(" %s",s1.y);
return 0;
}
