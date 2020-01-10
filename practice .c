#include<stdio.h>
struct book
{
int bookid;
char title[20];
float price;
};
struct book input()
{
 struct book b;
 printf("Enter book ID : ");
 scanf("%d",&b.bookid);
 fflush(stdin);
 printf("Enter book title : ");
 gets(b.title);
 printf("Enter book price : ");
 scanf("%f",&b.price);
 return b;
}
void display(struct book b)
{
printf("Book ID : %d\n",b.bookid);
printf("Book Name : %s\n",b.title);
printf("Book Price : %f\n",b.price);
}
int main()
{
struct book b1;
b1=input();
display(b1);
return 0;
}
