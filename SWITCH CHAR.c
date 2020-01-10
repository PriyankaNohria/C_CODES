#include<stdio.h>
int main()
{
char choice;
scanf("%d",&choice);
if(choice>=65&&choice<=90)
choice=choice+32;
switch(choice)
{
case 'm': {
printf("monday");
break; }
case 't': {
printf("tuesday");
break; }
case 'w': {
printf("wednesday");
break; }
case 'a': {
printf("thursday");
break; }
case 'f': {
printf("friday");
break; }
case 's': {
printf("saturday");
break; }
case 'd': {
 printf("default");
 break; }
}
return 0;
}
