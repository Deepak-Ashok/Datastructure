#include<stdio.h>
void dfs(int n,int a[10][10],int source, int s[10])
{
	int i;
	printf("%d\t",source);
	s[source]=1;
	for(i=1;i<=n;i++)
	if(s[i]==0 && a[source][i]==1)
	dfs(n,a,i,s);
} 
int main()
{
	int n,a[10][10],i,j,source,s[10];
	printf("Enter the number of nodes\n");
	scanf("%d",&n);
	printf("Enter the adjacency matrix\n");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)                                                                                                                                 
	scanf("%d",&a[i][j]);
	printf("Enter the source\n");
	scanf("%d",&source);
	printf("DFS:\n");
	for(i=1;i<=n;i++)
	s[i]=0;
	dfs(n,a,source,s);
}
 
