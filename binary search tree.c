#include<stdio.h>
typedef struct Tree
{
 int data;
 struct Tree *left;
 struct Tree *right;
}Tree;

typedef struct stree
{
 Tree *node;
 int dist;
}stree;

typedef struct node
{
 stree *snode;
 struct node *next;
}node;

typedef struct queue
{
struct node *front;
struct node *rear;
}queue;

typedef struct map
{
 int key;
 int value;
}map;

typedef struct LinkedList
{
 map m;
 struct LinkedList *next;
}list;

queue* init()
{
 queue *q=(queue*)malloc(sizeof(queue));
 q->front=NULL;
 q->rear=NULL;
}

int isEmptyQ(queue *q)
{
  if(q->front==NULL)
    return 1;
  else
    return 0;
}

int top(queue *q)
{
  return q->front;
}

void push(queue *q,stree *nn)
{
  node *n=(node*)malloc(sizeof(node));
  n->snode=nn;
  n->next=NULL;
  if(q->rear==NULL)
  {
    q->front=n;
    q->rear=n;
  }
  else
  {
    q->rear->next=n;
    q->rear=n;
  }
}

void pop(queue *qq)
{
 if(q->front==q->rear)
 {
   q->front=NULL;
   q->rear=NULL;
 }
 queue *q;
 q->front=qq->front;
 qq->front=q->front->next;
}

void insert(tree *root)
{
  stree *nn=(stree*)malloc(sizeof(stree));
  nn->node=root;
  nn->dist=0;
  push(q,nn);
}

Tree* BST(Tree* root,int d)
{
   if(root=NULL)
   {
     Tree *nn=(Tree*)malloc(sizeof(Tree));
     nn->data=d;
     nn->left=NULL;
     nn->right=NULL;
   }
   else if(root->data>d)
    root->left=BST(root->left,d);
   else
    root->right=BST(root->right,d);

   return root;
}
int main()
{
Tree *root=BST(root,100);

return 0;
}


