#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void push(int s[SIZE],int*top,int item)
{
	*top=*top+1;
	s[*top]=item;
}
void pop(int s[SIZE],int*top)
{
	printf("%d\n",s[*top]);
	*top=*top-1;
}
void dis(int s[SIZE],int top)
{
	int i;
	printf("content of stack are\n");
	for(i=0;i<=top;i++)
	{
		printf("%d\n",s[i]);
	}
}
int main()
{
	int s[SIZE],top=-1,ch,item;
	for(;;)
	{
		printf("enter 1:push 2:pop 3:dispaly\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the item \n");
			scanf("%d",&item);
			push(s,&top,item);
			break;
			case 2:pop(s,&top);
			break;
			case 3:dis(s,top);
			break;
		default:return 0;
	}
}
}
