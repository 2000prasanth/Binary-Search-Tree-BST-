#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*left;
	struct node*right;
};
struct node*root;
struct node*temp;

void insert(int a)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node*));
	newnode->data=a;
	
	if(a<temp->data)
	{
		temp->left=newnode;
	}
	else
	{
		temp->right=newnode;
	}
	newnode->left=NULL;
	newnode->right=NULL;
	temp=newnode;
	
}

void preorder(struct node*root)
{
	if(root!=NULL)
	{
		printf("%d \n",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(struct node*root)
{
	int val;
	printf("enter value to search \n");
	scanf("%d",&val);
	if(root!=NULL)
	{
		inorder(root->left);
		if(root->data==val)
		{
			printf("value in root->left \n");
		}
		else
		{
			printf("value in root->right \n");
		}
	//	printf("%d \n",root->data);
		inorder(root->right);
	}
}
void postorder(struct node*root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d \n",root->data);
	}
}
void delete(int d)
{
	struct node*temp;
	void postorder(struct node*root)
{
	if(root!=NULL)
	{
		if(root->data=d)
		{
			root=temp;
			free(temp);
			
		}
		postorder(root->left);
		postorder(root->right);

	}
}
}
int main()
{
	/*struct node*n1,*n2,*n3,*n4,*n5,*n6,*n7;

	n1=(struct node *)malloc(sizeof(struct node *)); 
	n2=(struct node *)malloc(sizeof(struct node *));  
	n3=(struct node *)malloc(sizeof(struct node *));  
	n4=(struct node *)malloc(sizeof(struct node *));
	n5=(struct node *)malloc(sizeof(struct node *));  
	n6=(struct node *)malloc(sizeof(struct node *));  
	n7=(struct node *)malloc(sizeof(struct node *));    
	 n1->data=1;
	 n2->data=2;
	 n3->data=3;
	 n4->data=4;
	 n5->data=51=N;
	 n6->data=6;
	 n7->data=7;
	 n1->left=n2;
	 n1->right=n3;
	 n2->left=n4;
	 n2->right=n5;
	 n3->left=n6;
	 n3->right=n7;
	 n4->left=NULL;
	 n4->right=NULL;
	 n5->left=NULL;
	 n5->right=NULL;
	 n6->left=NULL;
	 n6->right=NULL;
	 n7->left=NULL;
	 n7->right=NULL;
	 //traversal
	 //root=n1;*/
	 int d;
	 printf("enter root node value \n");
	 scanf("%d",&d);
	 struct node*n1;
	 n1=(struct node*)malloc(sizeof(struct node*));
	 n1->data=d;
	 n1->left=NULL;
	 n1->right=NULL;
	 root=n1;
	 temp=n1;
	 
	// printf("enter no of nodes \n");
	 //scanf("%d",&n);
	 insert(1);
	 insert(2);
	 insert(3);
	 insert(4);
	 insert(5);
	 insert(6);
	 insert(7);
	/* int n;
	 printf("Enter no of nodes \n");
	 scanf("%d",&n);
	 for(int i=0;i<n;i++)
	 {
	 	printf("enter data \n");
	 	scanf("%d",&d);
	 	insert(d);
	 }*/
	 
	 printf("preorder \n");
	 preorder(n1);
	 //search
	 int val=4;
	 if(root->data=val||root==NULL)
	 {
	 	printf("value is in root node \n");
	 	return root;
	 }
	 else if(val<root->data)
	 {
	 inorder();
	 	
	 }
	
	/* printf("inorder \n");
	 inorder(n1);
	 printf("postorder \n");
	 postorder(n1);*/
	 return 0;
}
