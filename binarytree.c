#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
struct node*left,*right;
};
struct node*newnode(int data)
{
struct node*newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->left=newnode->right=NULL;
return newnode;
}
struct node*level(int a[],int i,int n)
{
	struct node*root=NULL;
if(i<n)
{
	root=newnode(a[i]);
root->left=level(a,2*i+1,n);
root->right=level(a,2*i+2,n);
}
return root;
}
void inoder(struct node*root)
{
	if(root!=NULL)
{    
	inoder(root->left);
	printf("%d",root->data);
	inoder(root->right);
}
}
void main()
{
int n,i;
printf("enter the no of element\n");
scanf("%d",&n);
int a[n];
printf("enter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
struct node*root=level(a,0,n);
inoder(root);
}

