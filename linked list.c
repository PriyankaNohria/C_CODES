#include<stdio.h>
struct node
{
int info;
struct node *link;
};
struct node *start=NULL;
struct node* newMemory()
{
struct node *n=(struct node*)malloc(sizeof(struct node));
return (n);
}
void insert()
{
struct node *temp,*t;
temp=newMemory();
printf("Enter a number : ");
scanf("%d",&temp->info);
temp->link=NULL;
if(start==NULL)
{
  start=temp;
}
else
{
  t=start;
  while(t->link!=NULL)
  {
    t=t->link;
  }
  t->link=temp;
}
}
void deleteNode()
{
struct node *r;
if(start==NULL)
  printf("List Is Empty\n");
else
{
 r=start;
 start=start->link;
 free(r);
}
}
void viewList()
{
 struct node *t;
 if(start==NULL)
        printf("List is Empty\n");
 else
 {
  t=start;
  while(t!=NULL){
  printf("%d ",t->info);
  t=t->link;
  }
  printf("\n");
 }
}
int menu()
{
 int ch;
 printf("1.insert a Node\n");
 printf("2.Delete first Node\n");
 printf("3.View a List\n");
 printf("4.Exit(0)\n");
 scanf("%d",&ch);
 return (ch);
}
int main()
{
while(1)
{
 switch(menu())
 {
  case 1:
     insert();
     break;
  case 2:
      deleteNode();
      break;
  case 3:
      viewList();
      break;
  case 4:
      exit(0);
  default:
      printf("Invalid Choice\n");
      break;
 }
}
return 0;
}
