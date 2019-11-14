#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
struct node{
	int info;
	struct node*link;
};
typedef struct node*NODE;
NODE insert(NODE first,int item)
	{
		NODE newnode,pres=first;
		newnode=(NODE)malloc(sizeof(struct node));
		newnode->info=item;
		if(first==NULL)
		{
			newnode->link=newnode;
			first=newnode;
			return first;
		}
		newnode->link=first;
		while(pres->link!=first)
		pres=pres->link;
		pres->link=newnode;
		return first;
	}
	void circular(NODE first,int ts)
	{
		NODE pres=first,cur=first;
		if(first==NULL)
		{
			printf("list is not present\n");
			return;
		}
		for(;;){
		if(cur->link!=first&&cur->info<=0){
			cur=cur->link;
			if(cur->link==first)
			printf("value before is %d\n",pres->info);
			pres->info=pres->info-ts;
			printf("value after is %d \n\n",pres->info);
			return;
		}
		else if(pres->info>0)
		{
			printf("value before is %d\n",pres->info);
			pres->info=pres->info-ts;
			printf("value after is %d \n\n",pres->info);
		}
		pres=pres->link;
	
	}
}

		

int main()
{
	NODE first=NULL;
	int ch,item,ts;
	for(;;)
	{
		printf("enter 1:insert 2:cputime\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter time required by client\n");
			scanf("%d",&item);
			first=insert(first,item);
			break;
			case 2:printf("enter time slice\n");
			scanf("%d",&ts);
			circular(first,ts);
			break;
			default:exit(0);
		}
	}
}
	
	
