#include<stdio.h>
struct fun
{
int x,y;
}point;
int main()
{
point.x=5;
point.y=10;
display(point.x,point.y);
printf("%d\n%d",point.x,point.y);
return 0;
}
int display(int x,int y)
{
x=9;
y=9;
}
