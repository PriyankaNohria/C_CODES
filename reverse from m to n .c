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
struct node* reversefrom(struct node *h,int m,int n)
{
struct node *curr=h;
struct node *revs,*revs_pre,*reve,*reve_next;
int i=1;
while(curr&&i<=n)
{
 if(i<m)
  revs_pre=curr;
 if(i==m)
    revs=curr;
 if(i==n)
 {
  reve=curr;
  reve_next=curr->next;
 }
 i++;
 curr=curr->next;
}
reve->next=NULL;
reve=reverse(revs);
if(revs_pre)
{
 revs_pre->next=reve;
}
else
    h=reve;
revs->next=reve_next;
return h;
}
int main()
{
struct node *head=NULL;
int a,i,n,b;
scanf("%d",&n);
int *arr=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
 insert(&head,arr[i]);
}
printf("Enter the value of m : ");
scanf("%d",&a);
printf("Enter the value of n : ");
scanf("%d",&b);
viewList(head);
struct node *p=reversefrom(head,a,b);
viewList(p);
return 0;
}
