
struct node{
	int data;
		
	struct node* next;

};

struct node *head=NULL;

int insert(int data,struct node*root)
{
	
	if(root->next==NULL)
	{
		root->next =  (struct node *)malloc(sizeof(struct node));
		
		if(root->next==NULL)
			return -1;		

		return 0;
	}

	return insert(data,(root->next));

}

int delete(int n,struct node*root)
{
	
	for(int i=0;i<n-1;i++)
	{
		root=root->next;
	}

	struct node *temp = root->next;

	root=root->next->next;
	
	free(temp);
	
}


	(void)(*arr)(void) [2];

	arr[0]=printf;
	arr[]




int insert(int d,struct node** root)
{
	


	if(root==NULL)
	{
	
            if (temp == NULL)
                return -1;
            temp->data = d;


		root=temp;	
		return 0;

	}	
	
	struct node temp2*=root;

	if(=NULL)
	{
		if(temp2->data > d)
			rc =insert(d,root->right)
		else
			rc=insert(d,temp2->left)
		
	}	
	
	return rc;


}
	
