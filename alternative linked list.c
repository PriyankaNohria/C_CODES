#include<stdio.h>
struct node
{
int data;
struct node *next;
};
void insert(struct node** head,int d)
{
struct node *p=(struct node*)malloc(sizeof(struct node));
if(*head==NULL)
{
 *head=p;
 p->data=d;
 p->next=NULL;
}
else
{
struct node *t;
t=*head;
while(t->next!=NULL)
{
t=t->next;
}
t->next=p;
p->data=d;
p->next=NULL;
}
}
void viewList(struct node *t)
{
 if(t==NULL)
        printf("List is Empty\n");
 else
 {
  while(t!=NULL){
  printf("%d ",t->data);
  t=t->next;
  }
  printf("\n");
 }
}
void fun(struct node *p)
{
 if(p==NULL)
 {
  return;
 }
 printf("%d ",p->data);
 if(p->next!=NULL)
 fun(p->next->next);
 printf("%d ",p->data);
}
int main()
{
struct node *head=NULL;
insert(&head,1);
insert(&head,2);
insert(&head,3);
insert(&head,4);
insert(&head,5);
viewList(head);
fun(head);
return 0;
}
