#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 void heap(int a[100],int k)
    {
        int temp,p;
        while(k!=0)
        {
            p=(k-1)/2;
            if(a[p]>a[k])
            break;
            else
            {
                temp=a[k];
                a[k]=a[p];
                a[p]=temp;
                k=p;
                
            }
        }
    }
void main()
{
    int a[100],n,i;
    printf("enter the number of incoming \n");
    scanf("%d",&n);
    printf("enter the  priority of each packet\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        heap(a,i);
    }
    printf("heap&max priority at root\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
