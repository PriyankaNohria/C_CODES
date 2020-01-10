#include<stdio.h>
int main()
{
 int num[50];
 int size;
 scanf("%d",&size);
 int smallest=0;
 for(int i=0;i<size;i++)
 {
 scanf("%d",&num[i]);
 }
 smallest=num[0];
 for(int i=1;i<size;i++)
 {
 if(smallest>num[i]) {
 smallest=num[i];  }
 }
 printf("%d\n%d",smallest,i);
 return 0;
}
