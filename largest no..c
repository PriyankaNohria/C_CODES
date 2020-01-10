#include<stdio.h>
int main()
{
int n,i,lar,ele;
printf("total elements");
scanf("%d",&ele);
printf("first element");
scanf("%d",&n);
lar=n;
for(i=1;i<=ele-1;i++) {
printf("enter another no.");
scanf("%d",&n);
if(n>lar) {
lar=n;
}
}
printf("%d",lar);
return 0;
}
