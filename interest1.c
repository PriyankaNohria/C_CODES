#include<stdio.h>
void main()
{
float principal=0.0;
float rate=0.0;
int time=0;
float interest=0;
printf("enter the principal");
scanf("%f",&principal);
printf("enter the rate");
scanf("%f",&rate);
printf("enter the time");
scanf("%d",&time);
interest=principal*rate*time/100;
printf("interest=%.2f\n",interest);
printf("%d",sizeof(time));
return 0;
}
