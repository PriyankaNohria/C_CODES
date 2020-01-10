#include<stdio.h>//programe how to find number of coins in 129
int main()
{
int amount=0;
int ten=0;
int five=0;
int one=0;
printf("enter the amount");
scanf("%d",&amount);
ten=amount/10;
amount=amount%10;
five=amount/5;
amount=amount%5;
one=amount/1;
printf("coins of ten=%d\n",ten);
printf("coins of five=%d\n",five);
printf("coins of one=%d\n",one);
return 0;
}
