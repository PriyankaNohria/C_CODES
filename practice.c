#include<stdio.h>
int main()
{
int deci,rem,bin=0,i=0;
scanf("%d",&deci);
while(deci!=0) {
rem=deci%2;
bin +=rem*pow(10,i);
deci=deci/2;
i++;
}
printf("%d",bin);
return 0;
}
