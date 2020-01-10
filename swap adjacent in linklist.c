#include<stdio.h>
struct node
{
int data;
struct node *next;
};
void insert(struct node** head,int d)
{
struct node *n=(struct node*)malloc(sizeof(struct node));
if(*head==NULL)
{
 *head=n;
 n->data=d;
 n->next=NULL;
}
else
{
 struct node *t;
 t=*head;
 while(t->next!=NULL)
 {
    t=t->next;
 }
 t->next=n;
 n->data=d;
 n->next=NULL;
}
}
void view(struct node *p)
{
 if(p==NULL)
     printf("List is Empty");
 else{
 while(p!=NULL)
 {
  printf("%d ",p->data);
  p=p->next;
 }
 printf("\n");
}
}
struct node* fun(struct node *curr)
{
struct node *f;
struct node *s;
f=curr;
if(curr)
s=curr->next;
if(f==NULL||s==NULL)
return f;
else
{
 s->next=fun(s->next);
 f->next=s->next;
 s->next=f;
 return s;
}
};
int main()
{
struct node *head=NULL;
insert(&head,1);
insert(&head,2);
insert(&head,3);
insert(&head,4);
insert(&head,5);
view(head);
struct node *t=fun(head);
view(t);
return 0;
}
