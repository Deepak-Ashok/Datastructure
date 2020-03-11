#include<stdio.h>
#include<string.h>
#include<conio.h>

int min(int a,int b)
{
	if(a<=b)
	{
		return a;
	}
	return b;
}

int main()
{
	int i,j,k,d[20][20],cost[20][20],n;
	printf("enter the size\n");
	scanf("%d",&n);
	printf("enter the cost of matrix\n");
	
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			scanf("%d",&cost[i][j]);
			d[i][j]=cost[i][j];
		}
	}
	for(k=0;k<=n-1;k++)
	{
		for(i=0;i<=n-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
	for(i=0;i<=n-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
				printf("%d ",d[i][j]);
			}
			printf("\n");
		}
	
}
