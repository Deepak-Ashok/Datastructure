#include<stdio.h>
#include<stdlib.h>
int count=1;
int topo[10];
int v[10];
void dfs(int a[10][10],int n,int src)
{
	int i;
	v[src]=1;
	for(i=1;i<=n;i++){
		if(a[src][i]==1&&v[i]==0)
		dfs(a,n,i);
		
	}
	topo[count++]=src;
}
int main()
{
	int n;
	int z[10][10],src,i,j;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
		printf("enter the adjacency matrix\n");
		for(i=1;i<=n;i++)
	{
		v[i]=0;
	for(j=1;j<=n;j++)
	{
		scanf("%d",&z[i][j]);
		
	}
}
	printf("enter the source node\n");
	scanf("%d",&src);
	dfs(z,n,src);
	for(i=1;i<=n;i++)
	{
		     if(v[i]==0)
		     dfs(z,n,i);
		 }
		     printf("the topological order :\n");
		     for(i=n;i>=1;i--)
		     
				 printf("%d\t",topo[i]);
			 
			 return 0;
		 }
