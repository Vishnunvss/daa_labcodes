//pair to make a sum - hash table

#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *nptr;
};
void print(struct node *l);
int push(struct node **a,int x);
void pair(int a[],int size,int p);
int key(int z,int p);
int main()
{
	int a[100],n,p;
	printf("enter the size of array :\n");
	scanf("%d",&n);
	printf("enter data :\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number\n");
	scanf("%d",&p);
	pair(a,n,p);
	return 1;
return 0;
}



void pair(int a[],int size,int p)
{
	struct node* arr[p/2];
		for(int i=0;i<=p/2;i++)
	{
		arr[i]=NULL;
	}
  int flag=0;
	
	
	for(int i=0;i<size;i++)
	{
		
		struct node *temp=arr[key(a[i],p)];
	
		while(temp!=NULL)
		{
			if(a[i]+temp->data==p)
			{
			printf("pair is present %d %d\n",a[i],temp->data);
			flag=1;
			break;
			}
		
		}
	//if(flag==1)
	//break;
	//else
		push(&arr[key(a[i],p)],a[i]);	
	}
	if(flag==0)
	{
		printf("no such pair \n");
	}
	

		
}
int push(struct node **a,int x)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->nptr=*a;
	*a=temp;
}

void print(struct node *l)
{  
    printf(" list is\n");
    while(l!=NULL)
    {
        printf("%d->",l->data);
        l=l->nptr;
    }
    printf(" \n");
}

int key(int z,int p)
{
		int k=z%p;
	if(k>p/2)
	return p-k;
	else
	return k;
}
