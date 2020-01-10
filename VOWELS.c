#include<stdio.h>
void main()
{
char ch_1=0;
printf("enter the character");
scanf("%c",&ch_1);
if((ch_1=='a'||ch_1=='A')||(ch_1=='e'||ch_1=='E')||(ch_1=='i'||ch_1=='I')||(ch_1=='o'||ch_1=='O')||(ch_1=='u'||ch_1=='U'))
{
printf("it is a vowel");
}
else
{
printf("it is not vowel");
}
return 0;
}
