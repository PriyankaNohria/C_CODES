#include<stdio.h>
struct hotel
{
 int A;
 int D;
};
struct hotel h[20];
int main()
{
 int n,i,temp,temp1,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Arrival Date : ");
  scanf("%d",&h[i].A);
  printf("Departure Date : ");
  scanf("%d",&h[i].D);
 }
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-1-i;j++)
  {
   if(h[j].D>h[j+1].D)
   {
     temp=h[j].D;
     h[j].D=h[j+1].D;
     h[j+1].D=temp;
     temp1=h[j].A;
     h[j].A=h[j+1].A;
     h[j+1].A=temp1;
   }
  }
 }
 for(i=0;i<n;i++)
 {
 printf("%d %d\n",h[i].A,h[i].D);
 }
 printf("Available\n");
 for(i=0;i<n-1;i++)
 {
  if(h[i].D<=h[i+1].A)
  {
     printf("Available\n");
  }
  else{
    printf("Not Available\n");
  }
 }
}
