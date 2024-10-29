#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node*left;
	struct node*right;
};
struct node*root=NULL;
int count=0;
struct node*insert(struct node*,int);
void display(struct node*);
void main()
{
	int choice,value;
	clrscr();
	printf("\n----binarytree----\n");
	while(1)
	{
		printf("\n*****menu*****\n");
		printf("1.insert\n2.display\n3.exit");
		printf("\nenter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		case1:printf("\n enter the value to be insert:");
	
		}
		
	}
}
struct node*insert(struct node*root,int value)
{
	struct node*newnode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	if(root==NULL)
	{
		newnode->left=newnode->right=NULL;
		root=newnode;
		count++;
	}
	else
	{
		if(count%2!=0)
		root->left=insert(root->left,value);
		else
		root->right=insert(root->right,value);
	}
	return root;
}
void display(struct node*root)
{
	if(root!=NULL)
	{
		display(root->left);
		printf("%d\t",root->data);
		display(root->right);
		}
	}


		
