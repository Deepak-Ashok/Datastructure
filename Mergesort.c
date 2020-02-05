#include<stdio.h>
#include<stdlib.h>

void merge(int a[10],int low,int mid,int high)
{  
	int c[20];
	int i=low;
	int j=mid+1;
	int k=low;
  
    while(i<=mid&&j<=high)
    {
		if(a[i]<a[j])
		
		c[k++]=a[i++];
		else
		c[k++]=a[j++];
	}
	while(i<=mid)
	{
		c[k++]=a[i++];
	}
	while(j<=high)
	{
		c[k++]=a[j++];
	}
	for(i=low;i<=high;i++)
	a[i]=c[i];
	
	
}
void mergesort(int a[10],int low,int high)
{
	if(low<high)
	{
	   int mid=(low+high)/2;
	   mergesort(a,low,mid);
	   mergesort(a,mid+1,high);
	   merge(a,low,mid,high);
   }
}

int main()
{
	int a[10],n,i;

	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the elements to array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n);
	
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
	
}
	
