#include<stdio.h>
int main()
{
int age=0;
char country=0;
char gender=0;
printf("enter the age");
scanf("%d",&age);
printf("enter the country");
scanf(" %c",&country);
printf("enter the gender");
scanf(" %c",&gender);
if(age>=18)
{
if((country=='s'||country=='S')&&(gender=='f'||gender=='F'))
{
printf("VOTE IS ELIGIBLE");
}
else if(((country=='s'||country=='S')||(country=='i'||country=='I')||(country=='j'||country=='J')||(country=='u'||country=='U'))&&((gender=='f'||gender=='F')||(gender=='m'||gender=='M')))
{
if((country=='s'||country=='S')&&(gender=='m'||gender=='M'))
{
printf("VOTING IS NOT ELIGIBLE");
}
}
}
return 0;
}
