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
struct node* reverse(struct node *h)
{
 struct node *curr=h,*next,*prev=NULL;
 while(curr!=NULL)
{
 next=curr->next;
 curr->next=prev;
 prev=curr;
 curr=next;
}
return prev;
}
int middle(struct node *h)
{
 struct node *p1,*l1,*l2;
 struct node *p2;
 p1=h;
 p2=h;
 while(p2!=NULL&&p2->next!=NULL){
 p1=p1->next;
 p2=p2->next->next;
 }
 l2=p1->next;
 p1->next=NULL;
 l1=h;
 struct node *rev=reverse(l2);
 l2=rev;
 while(l2)
 {
   struct node *temp=(struct node*)malloc(sizeof(struct node));
   temp->data=l2->data;
   temp->next=l1->next;
   l1->next=temp;
   l2=l2->next;
   if(l2)
   {
     l1=l1->next->next;
   }
 }
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
struct node *mid=middle(head);
view(mid);
return 0;
}
