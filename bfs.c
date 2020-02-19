#include<stdio.h>
#include<stdlib.h>
void bfs(int n,int a[10][10],int source,int s[10])
{
	int q[10],r=-1,f=0,v,i;
	s[source]=1;
	q[++ r]=source;
	printf("%d\t",source);
	while(f<=r)
	{
		v=q[f];
		f=f+1;
		for(i=1;i<=n;i++)
		{
			if(s[i]==0 && a[v][i]==1)
			{
				printf("%d\t",i);
				r=r+1;
				q[r]=i;
				s[i]=1;
			}
		}
	}
}

int main()
{                                                                                                 
	int n,a[10][10],source,s[10],i,j;
	printf("Enter the number of nodes\n");
	scanf("%d",&n);
	printf("Enter the adjancency matrix\n");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
	printf("Enter the source\n");
	scanf("%d",&source);
	printf("BFS:\n");
	for(i=1;i<=n;i++)
	s[i]=0;
	bfs(n,a,source,s);
}
