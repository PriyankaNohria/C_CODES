#include<stdio.h>
#include<conio.h>
#include<math.h>
typedef struct
{
int x;
int y;
}POINT;
int main()
{
POINT p1,p2;
scanf("%d%d",&p1.x,&p1.y);
scanf("%d%d",&p2.x,&p2.y);
float distance;
distance=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
printf("The coordinates of first point : %d %d\n",p1.x,p1.y);
printf("The coordinates of second point : %d %d\n",p2.x,p2.y);
printf("%f",distance);
return 0;
}
