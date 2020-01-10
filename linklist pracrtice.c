#include<stdio.h>
struct node
{
 int data;
 struct node *next;
};
struct node *start=NULL;
struct node* memory()
{
 struct node *n=(struct node*)malloc(sizeof(struct node));
 return (n);
};
void insert()
{
 struct node *p,*t;
 p=memory();
 scanf("%d",&p->data);
 p->next=NULL;
 if(start==NULL)
    {
    start=p;
    }
    else{
  t=start;
 while(t->next!=NULL)
 {
t=t->next;
 }
 t->next=p;
}}

void view(struct node *p)
{
   while(p!=NULL)
   {
    printf("%d ",p->data);
    p=p->next;
   }
   printf("\n");
}

void partition(struct node *p,struct node *n)
{
 n=p->next;
 p->next=NULL;
 while(start!=NULL)
 {
printf("%d ",start->data);
start=start->next;
 }
 printf("\n");
 while(n!=NULL)
 {
  printf("%d ",n->data);
  n=n->next;
 }
}
struct node* swap(struct node* h)
{
struct node *f,*s;
f=h;
if(f)
s=f->next;
if(f==NULL||s==NULL)
    return f;
s->next=swap(s->next);
f->next=s->next;
s->next=f;
return s;
}
int main()
{
 int n,i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 insert();
 view(start);
 struct node *p=swap(start);
 view(p);
 return 0;
}
