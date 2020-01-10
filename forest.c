#include<stdio.h>
#include<math.h>
int main()
{
int N,O,L;
printf("No of Trees : ");
scanf("%d",&N);
printf("Order :");
scanf("%d",&O);
printf("Minimum length to cut : ");
scanf("%d",&L);
printf("Tree and Rate of growth : ");
int I[N],R[N],i;
for(i=0;i<N;i++)
{
scanf("%d%d",&I[i],&R[i]);
}
long long int range=pow(10,18);
long long int mid;
int l=1;
long long int r=range;
while(l<r)
{
    mid=(l+r)/2;
  long long int sum=0;
  long long int order=0;
  for(i=0;i<N;i++)
  {
      sum=I[i]+R[i]*mid;
      if(sum>L)
      {
        order+=sum;
      }
  }
  if(order>=O)
  {
      r=mid;
  }
  else
  {
    l=mid+1;
    break;
  }
}
printf("%d",r);
return 0;
}
