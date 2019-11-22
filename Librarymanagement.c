#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    char lbook [100];
    struct node *left;
    struct node *right;
};
typedef struct node *NODE;

NODE insert (NODE root,char lbook [100])
{
    NODE newnode,pres,prev;
    newnode = (NODE)malloc(sizeof(struct node));
    newnode->left = newnode->right = NULL;
    strcpy(newnode->lbook,lbook);
    if (root == NULL)
    {
        root = newnode;
        return root;
    }
    pres = root;
    while (pres != NULL)
    {
        prev = pres;
        if (strcmp(lbook,pres->lbook) < 0)
        pres = pres->left;
        else if (strcmp(lbook,pres->lbook) > 0)
        pres = pres->right;
        else
            {
                printf ("Duplicate Book\n");
                return root;
            }
    }
    if (strcmp(lbook,prev->lbook) < 0)
      prev->left = newnode;
    else
      prev->right = newnode;
    return root;
}

void search (NODE root,char lbook[20])
{
    NODE pres;
    if (root == NULL)
      printf ("Empty Catalog,Search Not Possible\n");
    else
      {
          pres = root;
          if (strcmp(lbook,pres->lbook) == 0)
             {
                 printf("Book Found\n");
                 return;
             }
          while (pres != NULL)
          {
              if( strcmp(lbook,pres->lbook) == 0)
              {
                  printf ("Book Found\n");
                  return;
              }
              if (strcmp(lbook,pres->lbook) < 0)
                 pres = pres->left;
              else
                 pres = pres->right;
          }
          printf( "Book not found\n");
       }
}
    
int main()
{
    NODE root=NULL;
    int ch;
    char lbook[100];
    char bname[100];
    for(;;)
    {
        printf("1.Insert 2.Search\n");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1: printf("Enter Book Name\n");
                    scanf("%s",lbook);
                    root = insert(root,lbook);
                    break;
            case 2: if(root == NULL)
                    printf("Empty Catalog,Search Not Possible\n");
                    else
                         {
                         printf("Enter the Book to be Searched\n");
                         scanf("%s",bname);
                         search(root,bname);
                         }
                    break;
            default: exit(0);
        }
    }
}
