#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
struct node{
	int info;
	struct node*left;
	struct node*right;
};
typedef struct node*NODE;
  NODE insert(NODE root,int item)
  {
	  NODE prev,pres;
	  NODE newnode=(NODE)malloc(sizeof(struct node));
	  newnode->left=newnode->right=NULL;
	  newnode->info=item;
	  if(root==NULL)
	  {
		  root=newnode;
		  return root;
	  }
	  pres=root;
	  while(pres!=NULL)
	  {
		  prev=pres;
		  if(item<pres->info)
		  {
			  pres=pres->left;
		  }
		else  if(item==pres->info)
		  {
			  printf("duplicte identifier\n");
			  return root;
		  }
		  else
		  pres=pres->right;
	  }
	  if(item<prev->info)
	  prev->left=newnode;
	  else
	  prev->right=newnode;
	  return root;
  }
  void preorder(NODE root)
  {
	  if(root!=NULL)
	  {
		  printf("%d\t",root->info);
		  preorder(root->left);
		  preorder(root->right);
	  }
  }
  void inorder(NODE root)
  {
	  if(root!=NULL)
	  {inorder(root->left);
		  printf("%d\t",root->info);
		 
		  inorder(root->right);
	  }
  }
   void postorder(NODE root)
  {
	  if(root!=NULL)
	  {
		 postorder(root->left);
		 postorder(root->right);
		 printf("%d\t",root->info);
		  
	  }
  }

int main()
{
	NODE root=NULL;
	int ch,item;
	for(;;)
	{
		printf("1:insert 2:pre 3:in 4:post\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the item\n");
			       scanf("%d",&item);
			       root=insert(root,item);
			       break;
			case 2:if(root==NULL)
			       printf("empty tree\n");
			       else
			       preorder(root);
			       break;
			 case 3:if(root==NULL)
			       printf("empty tree\n");
			       else
			       inorder(root);
			       break;
			 case 4:if(root==NULL)
			        printf("empty tree");
			        else
			        postorder(root);
			        break;
			  default:exit(0);
		  }
	  }
  }
