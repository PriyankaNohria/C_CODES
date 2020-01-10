#include<stdio.h>
struct number
{
int a,b,c;
//int largest;
}num;
int main()
{
    int largest;
scanf("%d%d%d",&num.a,&num.b,&num.c);
if(num.a>num.b&&num.a>num.c)
{
largest=num.a;
}
else if(num.b>num.a&&num.b>num.c)
{
largest=num.b;
}
else{
largest=num.c;
}
printf("%d",largest);
return 0;
}
