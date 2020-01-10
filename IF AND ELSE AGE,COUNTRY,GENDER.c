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
if((country=='s'||country=='S')&&(gender=='F'||gender=='f'))
{
printf("NOT ELIGIBLE FOR VOTE");
}
else if(((country=='I'||country=='i')||(country=='j'||country=='J')||(country=='u'||country=='U'))&&((gender=='m'||gender=='M')||(gender=='f'||gender=='F')))if((country=='s'||country=='S')&&(gender=='m'||gender=='M'))
if((country=='s'||country=='S')&&(gender=='M'||gender=='m'))
{
printf("ELIGIBLE FOR VOTE");
 }
return 0;
}
