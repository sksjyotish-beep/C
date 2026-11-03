#include<stdio.h>
#include<stdlib.h>
  struct node{
        int data;
        struct node *left,*right;  
    };
int main()
{
   struct node *root,*a,*b;
   root=(struct node*)malloc(sizeof(struct node));
   a=(struct node*)malloc(sizeof(struct node));
   b=(struct node*)malloc(sizeof(struct node));
   root->data=50;
   root->left=a;
   root->right=b;
    a->data=30;
    a->left=NULL;
    a->right=NULL;
    b->data=70;
    b->left=NULL;
    b->right=NULL;
    printf("%d\n%d\n%d\n",root->data,a->data,b->data);
    return 0;

}