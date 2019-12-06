#include <stdio.h>
#include <stdlib.h>
struct node
{
int info;
struct node *llink;
struct node *rlink;
};
typedef struct node *NODE;
NODE insert (NODE first,int item)
{
NODE newnode;
newnode = (NODE)malloc(sizeof(struct node));
newnode->info = item;
newnode->llink = NULL;
newnode->rlink = NULL;

if(first == NULL)
return newnode;
else
{
	newnode->rlink=first;
	first->llink=newnode;
	first=newnode;
}
return first;
}
NODE delete (NODE first)
{
int key;
NODE prev,pres;
if (first == NULL)
{
printf ("List Underflow\n");
return first;
}
printf ("Enter the Item to be deleted\n");
scanf ("%d",&key);
if (first->info == key)
{
pres = first;
printf ("%d is deleted\n",first->info);
first = first->rlink;
free (pres);
return first;
}
pres = first;
while (pres != NULL && pres->info != key)
{
prev = pres;
pres = pres->rlink;
}
if (pres == NULL)
{
printf ("Data not found\n");
return first;
}
prev->rlink = pres->rlink;
pres->rlink = prev;
free (pres);
return first;
}
void display (NODE first)
{
NODE temp;
if (first == NULL)
printf ("List is Empty\n");
else
{
printf ("Content of List\n");
temp = first;
while (temp != NULL)
{
printf ("%d\t",temp->info);
temp = temp->rlink;
}
printf ("\n");
}
}
int main ()
{
int ch,item;
NODE first=NULL;
for (;;)
{
printf ("1:INSERT 2:DELETE 3:DISPLAY\n");
scanf ("%d",&ch);
switch (ch)
{
case 1: printf ("Enter the Item\n");
scanf ("%d",&item);
first = insert (first,item);
break;
case 2: first = delete (first);
break;
case 3: display (first);
break;
default: exit(0);
}
}
}

