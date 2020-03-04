#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int a[10][10],i,j,k,node,in[10],v[10];
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	printf("enter the adjacency matrix\n");
	for(i=1;i<=n;i++)
	{ 
		in[i]=0;
		v[i]=0;
	}
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=n;j++)
	{
		scanf("%d",&a[i][j]);
		if(a[i][j]==1)
		in[j]++;
	}
}
	printf("the topological sortingorder\n");
	for(i=0;i<n;i++)
	{
		for(k=1;k<=n;k++)
          {
			  if(in[k]==0&&v[k]==0)
			  {
				  node=k;
				  printf("%d\t",node);
				  v[node]=1;
				  break;
			  }
		  }
		  for(j=1;j<=n;j++)
		  {
		  if(a[node][j]==1)
		  in[j]--;
	  }
	  }
	  return 0;
  }		
