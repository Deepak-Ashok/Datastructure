#include <stdio.h>
#include <stdlib.h>
struct node
{
int info;
struct node *link;
};
typedef struct node *NODE;
NODE circular (NODE first,int item)
{
NODE newnode,pres = first;
newnode = (NODE)malloc(sizeof(struct node));
newnode->info = item;
if (first == NULL)
{
newnode->link = newnode;
first = newnode;
return first;
}
newnode->link = first;
while (pres->link != first)
pres = pres->link;
pres->link = newnode;
return first;
}
void cputime (NODE first,int ts)
{
NODE pres;
pres = first;
for (;;)
{
if (pres->info > 0)
{
printf ("%d is current time\t",pres->info);
pres->info = pres->info - ts;
printf ("%d time remaining\n",pres->info);
}
while (pres->link != first && pres->info <= 0)
{
pres = pres->link;
printf ("Job Time ends\n\n");
}
if (pres->link == first && pres->info <= 0)
{
pres = pres->link;
printf ("Job Time ends\n\n");
break;
}
}
}
int main ()
{
int ch,item,ts;
NODE first = NULL;
for (;;)
{
printf ("1:INSERT 2:TIME SLICE\n");
scanf ("%d",&ch);
switch (ch)
{
case 1: printf ("Enter the Job time of each client\n");
scanf ("%d",&item);
first = circular (first,item);
break;
case 2: printf ("Enter the Time Slice\n");
scanf ("%d",&ts);
printf ("CPU time by each client\n");
cputime (first,ts);
break;
default: exit(0);
}
}
}
