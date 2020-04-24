//gcd of k numbers - recursive


#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *nptr;
};
struct node *root;
int top=-1;
void push(int x);
int pop();
int gcd(int a,int b);
int GCD(struct node *root);
int main()
{
	int n,z,result;
	printf("enter no of integers :\n");
	scanf("%d",&n);
	printf("enter data\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&z);
		push(z);
	}
	int flag=0;
	struct node *temp;
	temp=root;
	for(int i=0;i<n;i++)
	{
	   if(temp->data!=0)
	   flag=1;
        temp=temp->nptr;
	}
if(flag==0)
printf("GCD IS NOT DEFINED\n");
else
{
result=GCD(root);
printf("gcd is %d\n",result);}

	
}

int GCD(struct node *root)
{
	push(gcd(pop(),pop()));
	if(top!=0)
	return GCD(root);
	if(top==0)
	return pop();
}

int gcd(int a,int b)
{
  int n1,n2;
  n1=(a<0)?-a:a;
  n2=(b<0)?-b:b;
  int o;
  if(n1<n2)
  {
  	o=n1;
  	n1=n2;n2=o;
  }
  
  if(n2==0)
  return n1;
  else
  {
  	return gcd(n2,n1%n2);
  }
}
void push(int x)
{
	top++;
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->nptr=root;
	root=temp;
}
int pop()
{
	top--;
	int x=root->data;
	root=root->nptr;
	return x;
}
