#include<stdio.h>//programe to find how many ten,five and one coins in 428
void main()
{
    int amount=0;//428
    int ten=0;
    int five=0;
    int one=0;
    printf("enter the amount");
    scanf("%d",&amount);
    ten=amount/10;//12
    amount=amount%10;//8
    five=amount/5;//1
    amount=amount%5;//3
    one=amount/1;//3s
    printf("total coins of ten rupee=%d\n",ten);
    printf("total coins of five rupee=%d\n",five);
    printf("total coins of one rupee=%d\n",one);
    return 0;
}


