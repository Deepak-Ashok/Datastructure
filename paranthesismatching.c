#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void push(char S[20],int*top,char item)
{
	*top=*top+1;
	S[*top]=item;
}
void pop(char s[20],int *top)
{
	*top=*top-1;
}
int main()
{
	char I[20],S[20],ch;
	int top=-1,i;
	printf("enter the infix expression\n");
	scanf("%s",I);
	push(S,&top,'#');
	for(i=0;i<strlen(I);i++)
	{
		ch=I[i];
		if(ch=='(')
		push(S,&top,ch);
		if(ch==')')
		{
			if(S[top]!='#')
			pop(S,&top);
			else
			{
				printf("not balanced\n");
			}
			return(0);
		}
		if(S[top]=='#')
		printf("balnced\n");
		else
		{
			printf("unbalnced\n");
		}
	}
}
