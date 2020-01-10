#include<stdio.h>
struct eval
{
int val;
int index;
};
int cmp(const void* a,const void* b)
{
 struct eval *p=(struct eval*)a;
 struct eval *q=(struct eval*)b;
 return (p->val-q->val);
}
int main()
{
int n,i,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
struct eval arr[n];
for(i=0;i<n;i++)
{
arr[i].val=a[i];
arr[i].index=i;
}
int min=arr[0].index,max_el=0;
qsort(arr,n,sizeof(a[0]),cmp);
for(i=1;i<n;i++)
{
 if(arr[i].index<min)
        min=arr[i].index;
 if(arr[i].index-min>max_el)
    max_el=arr[i].index-min;
}
printf("\n%d",max_el);
return 0;
}
