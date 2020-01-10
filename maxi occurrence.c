#include<stdio.h>
int main()
{
    int i,j,temp;
 int L[]={2,1,3};
 int R[]={5,3,9};
 int maxele=-1;
 for(i=0;i<3;i++)
 {
  if(maxele<R[i])
        maxele=R[i];
 }
 int c[12]={0};
 for(i=0;i<3;i++)
 {
     temp=L[i];
  for(j=L[i];j<temp+1;j++)
  {
    c[L[i]]++;
    c[R[i]+1]--;
  }
 }
 int prev=0,max=0;
 for(i=0;i<maxele+1;i++)
 {
  if(prev+c[i]>max)
  {
   max=prev+c[i];
  }
  prev=prev+c[i];
 }
 printf("%d",max);
}
