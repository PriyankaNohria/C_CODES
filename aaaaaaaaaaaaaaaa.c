#include<stdio.h>
#include<string.h>
typedef struct
{
int feet;
int inches;
}HEIGHT;
HEIGHT add(HEIGHT h1,HEIGHT h2);
HEIGHT sub(HEIGHT h1,HEIGHT h2);
int main()
{
HEIGHT h1,h2,h3;
int option;
do{
scanf("%d",&option);
switch(option)
{
case 1:{
scanf("%d%d",&h1.feet,&h1.inches);
scanf("%d%d",&h2.feet,&h2.inches);
break; }
case 2:{
printf("%dfeet%dinches",h1.feet,h1.inches);
printf("%dfeet%dinches",h2.feet,h2.inches);
break; }
case 3:{
h3=add(h1,h2);
printf("%dfeet%dinches",h3.feet,h3.inches);
break;
}
case 4:{
h3=sub(h1,h2);
printf("%dfeet%dinches",h3.feet,h3.inches);
break;
}
}}while(option!=5);
return 0;
}
HEIGHT add(HEIGHT h1,HEIGHT h2)
{
HEIGHT sum;
sum.inches=h1.inches+h2.inches;
while(sum.inches>12){
sum.inches-=12;
sum.feet++;
}
sum.feet=h1.feet+h2.feet;
return sum;
}
HEIGHT sub(HEIGHT h1,HEIGHT h2)
{
HEIGHT sub;
if(h1.feet>h2.feet)
{
if(h1.inches<h2.inches)
{
h1.inches+=12;
h1.feet--;
}
sub.inches=h1.inches-h2.inches;
sub.feet=h1.feet-h2.feet;
}
else{
if(h2.inches<h1.inches){
h2.inches+=12;
h2.feet--;
}
sub.inches=h2.inches-h1.inches;
sub.feet=h2.feet-h1.feet;
}
return sub;
}
