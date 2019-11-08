int main()
{
	NODE root=NULL;
	int ch,item;
	for(;;)
	{
		printf("1:insert 2:pre 3:in 4:post\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the item\n");
			       scanf("%d",&item);
			       root=insert(root,item);
			       break;
			case 2:if(root==NULL)
			       printf("empty tree\n");
			       else
			       preorder(root);
			       break;
			 case 3:if(root==NULL)
			       printf("empty tree\n");
			       else
			       inorder(root);
			       break;
			 case 4:if(root==NULL)
			        printf("empty tree");
			        else
			        postorder(root);
			        break;
			  default:exit(0);
		  }
	  }
}
