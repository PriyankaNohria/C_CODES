#include<stdio.h>
int mycomp(const void *a,const void *b)
{
 return (*(int*)a-*(int*)b);
}
int main()
{
 int n;
 int a[50],i;
 printf("Enter the Elements of Array : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("Before Sorting : ");
 for(i=0;i<n;i++)
{
 printf("%d ",a[i]);
}
qsort(a,n,sizeof(a[0]),mycomp);
printf("\nAfter Sorting : ");
 for(i=0;i<n;i++)
{
 printf("%d ",a[i]);
}
 return 0;
}
