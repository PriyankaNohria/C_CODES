#include<stdio.h>
typedef struct{
int x;
int y;
}point;
int main()
{
point p1;
scanf("%d",&p1.x);
scanf("%d",&p1.y);
display(p1.x,p1.y);
printf("%d\n%d",p1.x,p1.y);
return 0;
}
int display(int x,int y)
{
x=9;
y=9;
}
