#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
struct node{
	int empid;char ename[20];float lt;
	struct node*left;
	struct node*right;
};
typedef struct node*NODE;
  NODE insert(NODE root,int eid,char ename[20],float lt)
  {
	  NODE prev,pres;
	  NODE newnode=(NODE)malloc(sizeof(struct node));
	  newnode->left=newnode->right=NULL;
	  newnode->empid=eid;
	  strcpy(newnode->ename,ename);
	  newnode->lt=lt;
	  if(root==NULL)
	  {
		  root=newnode;
		  return root;
	  }
	  pres=root;
	  while(pres!=NULL)
	  {
		  prev=pres;
		  if(eid<pres->empid)
		  {
			  pres=pres->left;
		  }
		else  if(eid==pres->empid)
		  {
			  printf("duplicte identifier\n");
			  return root;
		  }
		  else
		  pres=pres->right;
	  }
	  if(eid<prev->empid)
	  prev->left=newnode;
	  else
	  prev->right=newnode;
	  return root;
  }
 
  void inorder(NODE root)
  {
	  if(root!=NULL)
	  {inorder(root->left);
		  printf("%d\t+%s\t+%f\n",root->empid,root->ename,root->lt);
		  inorder(root->right);
	  }
  }
 

int main()
{
	NODE root=NULL;
	int ch,eid;char ename[20];
	float lt;
	for(;;)
	{
		printf("1:insert 2:inorder else:exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the eid,ename,lt\n");
			       scanf("%d%s%f",&eid,ename,&lt);
			       root=insert(root,eid,ename,lt);
			       break;
			case 2:if(root==NULL)
			       printf("empty tree\n");
			       else
			       inorder(root);
			       break;
			
			  default:exit(0);
		  }
	  }
  }
