#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int Insert(char q[100],int*rear,char a){
	 
				*rear=*rear+1;
				q[*rear]=a;
				
	 }
 
		
void delete(char q[100],int*front,int*rear)
{
	
	if(*front>*rear)
	printf("buffer empty\n");
	else
	
	{
		
		printf(" deleted  %c\n",q[*front]);
		*front=*front+1;
	}
}

int main()
{
	char a[100],q[100];
	int ch,front=0,rear=-1,i;
	for(;;)
	{
		printf("1:insert 2:delete else:exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the string\n");
			scanf("%s",a);
			for(i=0;i<strlen(a);i++)
			{
				Insert(q,&rear,a[i]);
			}
			break;

			
			case 2:for(i=0;i<strlen(a);i++)
			{
				delete(q,&front,&rear);
			}
			break;
			default :return(0);
		}
	}
}

