#include<stdio.h>
void merge(int *a,int l,int mid,int r,int *aux)
{
 int i=l,k=0;
 int j=mid;
  for(k=l;k<=r;k++)
 {
   if(j>r||i>=mid)
        break;
   else if(a[i]<=a[j])
   {
     aux[k]=a[i];
     i++;
   }
   else
   {
    aux[k]=a[j];
    j++;
   }
 }
 while(i<mid)
 {
    aux[k++]=a[i];
    i++;
 }
 while(j<=r)
 {
    aux[k++]=a[j];
    j++;
 }
 for(k=l;k<=r;k++)
    a[k]=aux[k];
}
void mergeSort(int *a,int l,int r,int *aux)
{
  int i,mid;
  if(l<r){
  mid=(l+r)/2;
  mergeSort(a,l,mid,aux);
  mergeSort(a,mid+1,r,aux);
  merge(a,l,mid+1,r,aux);
}
}
int main()
{
int n,i;
scanf("%d",&n);
int arr[n];
int aux[n];
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
  aux[i]=0;
}
for(i=0;i<n;i++)
    printf("%d ",arr[i]);

printf("\n");

mergeSort(arr,0,n-1,aux);
for(i=0;i<n;i++)
    printf("%d ",aux[i]);
return 0;
}
