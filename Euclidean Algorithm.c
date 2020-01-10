#include<stdio.h>
int GCD(int x,int y)
{
 if(x==0)
   return y;
 else
    return GCD(y%x,x);
}
int main()
{
int x,y;
printf("Enter the Value of x : ");
scanf("%d",&x);
printf("Enter the Value of y : ");
scanf("%d",&y);
int res=GCD(x,y);
printf("GCD of %d and %d is : %d",x,y,res);
return 0;
}
