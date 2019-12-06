#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node*link;
};
typedef struct node*NODE;

	NODE inspos(NODE first,int pos)
{
	NODE newnode,pres,prev;
	int count=1;
	
			
	if(pos==1)
	{
		newnode=(NODE)malloc(sizeof(struct node));
printf("enter the info to inserted\n");
		scanf("%d",&newnode->info);
		newnode->link=first;
		first=newnode;
		return first;
	}
	pres=first;
	while (count <= pos-1&&pres != NULL )
	{
		prev=pres;
		pres=pres->link;
		count++;
	}
	if(pres == NULL)
	{
		printf("invalid position\n");
		return first;
	}
	newnode=(NODE)malloc(sizeof(struct node));
	printf("enter the info to inserted\n");
		scanf("%d",&newnode->info);
	
		
		prev->link  = newnode;
		newnode->link = pres;
		return first;
	}
	NODE deleteinfo(NODE first)
	{
		NODE temp;
		if(first==NULL)
		{
			printf("underflow\n");
			return first;
		}
		else
		{
			temp=first;
			
			first=first->link;
			printf("%d",temp->info);
			free(temp);
			return first;
		}
	}
	void display(NODE first)
	{
		NODE temp;
		if(first==NULL)
		{
			printf("underflow\n");
			
		}
		else
		{
			temp=first;
			while(temp!=NULL)
			{
				
			printf("%d \n",temp->info);
			temp=temp->link;
		}
	}
}
			
		
		int main()
{
	NODE first=NULL;
	int ch,pos;
	for(;;)
	{
		printf("enter 1:insert 2:delete 3:display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter pos\n");
			scanf("%d",&pos);
			first=inspos(first,pos);
			break;
			case 2:
			
			deleteinfo(first);
			break;
			case 3:display(first);
			break;
			
			default:exit(0);
		}
	}
}
	
	
