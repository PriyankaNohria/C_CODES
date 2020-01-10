#include<stdio.h>
struct node
{
int data;
struct node *next;
};
void insert(struct node** head,int d)
{
struct node *p=(struct node*)malloc(sizeof(struct node));
p->data=d;
p->next=*head;
*head=p;
}
void view(struct node* p)
{
if(p==NULL)
 printf("Linked List Is Empty");
else
{
while(p!=NULL)
{
printf("%d ",p->data);
p=p->next;
}
printf("\n");
}
}
void fun1(struct node* p)
{
if(p==NULL)
{
 return p->data;
}
else
{
 fun1(p->next);
 printf("%d ",p->data);
}
}
int main()
{
struct node *head=NULL;
insert(&head,5);
insert(&head,4);
insert(&head,3);
insert(&head,2);
insert(&head,1);
view(head);
fun1(head);
return 0;
}
