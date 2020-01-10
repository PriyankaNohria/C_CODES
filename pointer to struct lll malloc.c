#include<stdio.h>
struct demo
{
int x;
int y;
}d1;
void display(struct demo *);
int main()
{
struct demo *ptr;
ptr=&d1;
ptr=(struct demo*)malloc(sizeof(struct demo));
scanf("%d",&ptr->x);
scanf("%d",&ptr->y);
printf("%d\n",ptr->x);
printf("%d",ptr->y);
return 0;
}
