#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 126
int t[Max];
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
void shift_table(char p[])
{
int m; 
m=strlen(p);
for(int i=0;i<Max;i++)
t[i]=m;
for(int j=0;j<m-1;j++)
t[p[j]]=m-1-j;
}
 int max(int a,int b)
 {
	 if(a>b)
	 {
		 return a;
	 }
	 else
	 return b;
 }
int horspool(char src[200],char p[200])
{
	int i,k,m,n;
	n=strlen(src);
	m=strlen(p);
	printf("length of text=%d\n",n);
	printf("length of pattern=%d\n",m);
	i=m-1;
	while(i<n)
	{
		k=0;
		while((k<m)&&(p[m-1-k])==src[i-k])
		k++;
		if(m==k)
		return (i-m+1);
		else
		i=i+max(t[src[i]]-k,1);
	}
	return -1;
}
int main()
{
	char src[100],p[100];
	int pos ;
	printf("enter your text\n");
	gets(src);
	printf("enter the pattern to be searched\n");
	gets(p);
    shift_table(p);
    pos=horspool(src,p);
    if(p>=0)
    printf("pattern was found starting from pos %d\n",pos+1);
    else
    printf("pattern not found");
}
	
			
	
 
