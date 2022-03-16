#include<stdio.h>
#include<stdlib.h>

struct n{

	int data;
	struct node * right;
	struct node * left;
};

typedef struct n node;


int add(int data,node** root)
{
	if(*root==NULL)
	{
		node* t = (node*)malloc(sizeof(node));
		t->right=NULL;
		t->left=NULL;
			
		if(t!=NULL)
		{
			*root = t;
			return 0;
		}
		else
			return -1;
	}	
	else
	{
		if(data >= (*root)->data)
		return add(data,&(*root->right));
		if(data < (*root)->data)
		return add(data,&(*root->left));
	}
	
}


int main()
{

	node* root=NULL;
	
	rc *= add(10,&root);
	rc *= add(12,&root);
	rc *= add(3,&root);


}
