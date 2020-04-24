//gcd of k numbers - iterative

#include <stdio.h>
#include<stdlib.h>
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
printf("gcd is %d\n",result);
}
	
}

int GCD(struct node *root)
{
	int p,q,res;
	while(top!=0)
	{
		p=pop();
		q=pop();
		res=gcd(p,q);
		push(res);
		
	}
	res=pop();
	return res;
}

int gcd(int x,int y)
{
	
  int n1,n2,a,b;
  a=(x<0)?-x:x;
  b=(y<0)?-y:y;
  n1=(a>b)?a:b;
  n2=a+b-n1;
  
 // printf(" %d %d \n",n1,n2);
  
  if(n2==0)
  return n1;
  else
  {
  	int rem=n1%n2;
  	while(rem!=0)
  	{
  		n1=n2;
  		n2=rem;
  		rem=n1%n2;
  		//printf(" %d %d\n",n1,n2);
	  }
	  return n2;
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
