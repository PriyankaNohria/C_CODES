#include<stdio.h>
int a[]={5,8,9,1,2,0,3};
int size=0;
int n=7;
void swap(int i,int j)
{
 int temp=a[i];
 a[i]=a[j];
 a[j]=temp;
}
void sink(int i)
{
 if(i>=size)
    return;
 int max=i;
 int L=i*2;
 int R=i*2+1;
 if(L<size&&a[L]>a[max])
    max=L;
 if(R<size&&a[R]>a[max])
    max=R;
 if(i!=max)
 {
    swap(i,max);
 }
}
void swim(int i)
{
 if(i==0)
   return;
 int p=i/2;
 if(a[p]<a[i])
 {
  swap(p,i);
  swim(p);
 }
}
void insert(int k)
{
 a[size++]=k;
 swim(size-1);
}
int get_max()
{
 return a[0];
}
int del_max()
{
 int k=get_max();
 swap(0,size-1);
 size--;
 sink(0);
 return k;
}
void print()
{
 int i;
 for(i=0;i<n;i++)
    printf("%d ",a[i]);
 printf("\n");
}
void heapFly()
{
  int i=n/2;
  for(;i>=0;i--)
  {
   sink(i);
  }
}
void sort()
{
  heapFly();
  printf("After HeapFly\n");
  print();
  int i=0;
  for(;i<n;i++)
  {
   swap(0,size-1);
   size--;
   sink(0);
  }
}
int main()
{
int i;
for(i=0;i<n;i++)
 insert(a[i]);
print();
sort();
printf("After Sort\n");
print();
return 0;
}
