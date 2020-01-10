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
struct node* removedupli(struct node *h)
{
 struct node *curr=h,*prev;
 struct node *dummy=(struct node*)malloc(sizeof(struct node));
 dummy->next=h;
 prev=dummy;
 while(curr)
 {
   while(curr->next&&prev->next->data==curr->next->data)
        curr=curr->next;
   if(prev->next==curr)
    prev=prev->next;
   else
    prev->next=curr->next;
   curr=curr->next;
 }
 h=dummy->next;
 return h;
}
int main()
{
struct node *head=NULL;
int a,i,n;
scanf("%d",&n);
int *arr=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
 insert(&head,arr[i]);
}
view(head);
struct node *mid=removedupli(head);
view(mid);
return 0;
}
