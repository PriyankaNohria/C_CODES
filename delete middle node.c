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
    printf("Empty");
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
struct node* middle(struct node *curr)
{
 struct node *p1;
 struct node *p2;
 p1=curr;
 p2=curr;
 while(p2!=NULL&&p2->next!=NULL){
 p1=p1->next;
 p2=p2->next->next;
 }
 return p1;
}
void removeNode(struct node *n,struct node *head)
{
    struct node *t1;
    struct node *t2;
 while(head->next!=NULL)
{
 if(head->next==n)
 {
   t1=head->next->next;
   t2=head->next;
   head->next=t1;
   free(t2);
   break;
 }
 head=head->next;
}
}
int main()
{
struct node *head=NULL;
insert(&head,1);
insert(&head,2);
insert(&head,3);
insert(&head,4);
insert(&head,5);
insert(&head,6);
view(head);
struct node* mid=middle(head);
removeNode(mid,head);
view(head);
return 0;
}
