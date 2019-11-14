#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
struct node{
	int info;
	struct node*llink;
	struct node*rlink;
};
typedef struct node*NODE;
NODE insert(NODE first,int item)
{
	NODE newnode;
	 newnode=(NODE)malloc(sizeof(struct node));
	
	newnode->info=item;
	newnode->llink=NULL;
	newnode->rlink=first;
	
	first->llink=newnode;
	first=newnode;
	
	return first;
}
void navigation(NODE first)
{
	NODE pres=first;
	int ch;
	for(;;)
	{
		printf("1:left 2:right 3:return\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:if(first==NULL)
			{
				printf("navigation not possible\n");
				return;
			}
			else if(pres->llink==NULL)
			printf("left navigation not possible\n");
			else
			{
				printf("cursor is at data %d\n",pres->info);
				pres=pres->llink;
				printf("cursor is at position %d\n",pres->info);
			}
			break;
			case 2:if(first==NULL)
			{
				printf("navigation not possible\n");
				return;
			}
			else if(pres->rlink==NULL)
			printf("right navigation not possible\n");
			else
			{
				printf("cursor is at data %d\n",pres->info);
				pres=pres->rlink;
				printf("cursor is at position %d\n",pres->info);
			}
			break;
			default:exit(0);
		}
	}
}

int main()
{
	int ch ,item;
	NODE first=NULL;
	for(;;)
	{
		printf("enter 1:insert 2:navigate\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the item \n");
			scanf("%d",&item);
			first=insert(first,item);
			break;
			case 2:navigation(first);
			break;
			
			default :return(0);
		}
	}
}
