#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 126
int t[max];
void shift_table(char p[])
{
int m; 
m=strlen(p);
for(int i=0;i<max;i++)
t[i]=m;
for(int j=0;j<m-1;j++)
t[p[j]]=m-1-j;
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
		i=i+t[src[i]];
	}
	return -1;
}
int main()
{
	char src[100],p[100];
	int pos ;
	printf("enter your text");
	gets(src);
	printf("enter the pattern to be searched");
	gets(p);
    shift_table(p);
    pos=horspool(src,p);
    if(p>=0)
    printf("pattern was found starting from pos %d\n",pos+1);
    else
    printf("pattern not found");
}
	
			
	
