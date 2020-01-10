#include<stdio.h>
struct demo
{
int x;
int y;
}d[50];
struct demo read(struct demo,int);
struct demo display(struct demo,int);

int main()
{
int n;
scanf("%d",&n);
int res=read(d,n);
display(d,n);
return 0;
}
struct demo read(struct demo *ptr,int n)
{
for(int i=0;i<n;i++)
{
scanf("%d",&ptr->x);
scanf("%d",&ptr->y);
ptr++;
}
return ptr;
}
struct demo display(struct demo *ptr,int n){
for(int i=0;i<n;i++)
{
printf("%d\n",ptr->x);
printf("%d\n",ptr->y);
ptr++;
}
}
