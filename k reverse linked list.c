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
void viewList(struct node *start)
{
 struct node *t;
 if(start==NULL)
        printf("List is Empty\n");
 else
 {
  t=start;
  while(t!=NULL){
  printf("%d ",t->data);
  t=t->next;
  }
  printf("\n");
 }
}
struct node* reverse(struct node *h,int A)
{
struct node *pre=NULL,*next;
struct node *curr=h;
int count=0;
while(curr!=NULL&&count<A)
{
 next=curr->next;
 curr->next=pre;
 pre=curr;
 curr=next;
 count++;
}
if(next!=NULL)
h->next=reverse(next,A);
return pre;
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
printf("No. of K nodes : ");
scanf("%d",&a);

viewList(head);
struct node *p=reverse(head,a);
viewList(p);
return 0;
}
