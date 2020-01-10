#include<stdio.h>
struct bookdetail
{
char name[50];
char author[50];
int cost;
};
struct publication
{
char pub_name[50];
char city[50];
int pin;
struct bookdetail book;
}pub;
int main()
{
scanf("\n%[^\n]",pub.pub_name);
scanf("\n%[^\n]",pub.city);
scanf("%d",&pub.pin);
printf("Above book information\n");
printf("Name : ");
scanf("\n%[^\n]",pub.book.name);
printf("Author : ");
scanf("\n%[^\n]",pub.book.author);
printf("Cost : ");
scanf("%d",&pub.book.cost);
return 0;
}
