#include<stdio.h>
#include<conio.h>
void display(int);
void selectionSort(int);
int a[100];
int main()
{
    int i,n;
printf("Total no. of Elements : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
display(n);
selectionSort(n);
return 0;
}
void display(int no)
{
    int k;
for(k=0;k<no;k++)
{
printf("%d\t",a[k]);
}
}
void selectionSort(int no)
{
int min,i,j,temp;
for(i=0;i<no-1;i++)
{
    min=i;
for(j=i+1;j<no;j++)
{
if(a[j]<a[min])
{
min=j;
}
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
printf("\nPass %d : ",i+1);
display(no);
}
}
