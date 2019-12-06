#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void push(int s[SIZE],int*rear,int item)
{
	*rear=*rear+1;
	s[*rear]=item;
}
void pop(int s[SIZE],int*rear,int*front)
{
	if(*front>*rear)
	printf("underflow\n");
	else
	{
	printf("%d\n",s[*front]);
	*front=*front+1;
	}
	
}
void dis(int s[SIZE],int front,int rear)
{
	   int i;
	if(front>rear)
	printf("q is empty\n");
	else
	{
	printf("the contents of queue are:\n");
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",s[i]);
}
}
}
int main()
{
	int s[SIZE],rear=-1,front=0,ch,item;
	for(;;)
	{
		printf("enter 1:push 2:pop 3:dispaly\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the item \n");
			scanf("%d",&item);
			push(s,&rear,item);
			break;
			case 2:pop(s,&rear,&front);
			break;
			case 3:dis(s,front,rear);
			break;
		default:return 0;
	}
}
}

