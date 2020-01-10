#include<stdio.h>
struct demo
{
int x;
int y;
}d[50];
int main()
{
int n;
scanf("%d",&n);
int res=read(d,n);
display(d,n);
return 0;
}
int read(struct demo *ptr,int n)
{
for(int i=0;i<n;i++)
{
scanf("%d",&ptr->x);
scanf("%d",&ptr->y);
}
return ptr;
}
void display(struct demo *ptr,int n){
for(int i=0;i<n;i++)
{
printf("%d\n",ptr->x);
printf("%d\n",ptr->y);
}
}
