#include<stdio.h>
#include<stdlib.h>
#define sz 100
void bst(int a[sz],int ele)
	{
		int p,c;
		if(a[0]=='\0')
		{
			a[0]=ele;
			return;
		}
		c=0;
		while(a[c]!='\0')
		{
			p=c;
			if(ele<a[c])
			c=2*c+1;
			else
			c=2*c+2;
			if(ele<a[p])
			c=2*p+1;
			else
			c=2*p+2;
			a[c]=ele;
		}
	}
int main()
{
	int n,ele,i,a[sz];
	for(i=0;i<n;i++)
	a[i]='\0';
	printf("enter the number of data in bst\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ele);
		bst(a,ele);
	}
	printf("bst is\n");
	for(i=0;i<sz;i++)
	if(a[i]!='\0')
	printf("a[%d]=%d\n",a[i]);
}
