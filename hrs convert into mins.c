#include<stdio.h>
int convert_time_min(int hrs,int min);
int main()
{
int hrs,min,result;
printf("enter hrs ");
scanf("%d",&hrs);
printf("enter min");
scanf("%d",&min);
result=convert_time_min(hrs,min);
printf("%d",result);
return 0;
}
int convert_time_min(int hrs,int min) {
int result;

result=hrs*60+min;
return result;
}
