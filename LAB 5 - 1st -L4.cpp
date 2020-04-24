//construct bst on all elements to sort
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *lptr;
	struct node *rptr;
};
struct node *root=NULL;
int BST(int a[],int start);
void insert(int data);
void inorder(struct node *tptr,int a[]);
int order=0;
int main()
{
	int main[100000];
	int k;
	int count=0;
	printf("enter the no of arrays:\n");
	scanf("%d",&k);
	int size[k];
	for(int i=0;i<k;i++)
	{
		printf("enter the size of %d array:",i+1);
		scanf("%d",&size[i]);
		for(int j=0;j<size[i];j++)
		{
			scanf("%d",&main[count+j]);
		}
		count=count+size[i];
	}
	printf(" %d -count\n",count);
    int final[count];
	BST(main,count);
    inorder(root,final);
    printf("\n");
    for(int k=0;k<count;k++)
    {
    	printf("%d  ",final[k]);
	}
}
int BST(int a[],int count)
{
	int i=0;
    while(i<count)
	{
        insert(a[i]);
        i++;
	}


	return 1;
}
	
	
void insert(int x)
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->lptr=NULL;
temp->rptr=NULL;
//printf(" %d  ",x);
if(root==NULL)
{
	root=temp;
}
else
{
	struct node *ptr=root,*pptr;
	while(ptr!=NULL)
	{
		pptr=ptr;
		if(x<ptr->data)
		{
			ptr=ptr->lptr;
		}
		else
		{
			ptr=ptr->rptr;
		}
	}
	if(x<pptr->data)
	pptr->lptr=temp;
	else
	pptr->rptr=temp;
}
}
void inorder(struct node *tptr,int a[])
{
	if(tptr!=NULL)
	{
		inorder(tptr->lptr,a);
        a[order++]=tptr->data;
		inorder(tptr->rptr,a);
	}
}
