
#include<stdio.h>
#include<conio.h>



int main()
{
	int i,j,k,p[20][20],a[20][20],n;
	printf("enter the size\n");
	scanf("%d",&n);
	printf("enter the cost of matrix\n");
	for(i=0;i<=n-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
	     scanf("%d",&a[i][j]);
	p[i][j]=a[i][j];
}
}
	
	for(k=0;k<=n-1;k++)
	{
		for(i=0;i<=n-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
				if(p[i][j]==0 && p[i][k]==1 &&p[k][j]==1)
				{
					p[i][j]=1;
				}
			}
		}
	}
	for(i=0;i<=n-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
	            printf("%d  ",p[i][j]);
}
printf("\n");
}
}
