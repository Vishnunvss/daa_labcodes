//pair to make a sum - sum of all pairs

#include <stdio.h>

int pair(int a[],int size,int p);
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
}
int pair(int a[],int size,int p)
{
	int flag=0;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[i]+a[j]==p)
			{
				printf("pair is present -> %d %d\n",a[i],a[j]);
				flag=1;
			}
			//if(flag==1)
			//break;
		}
		//if(flag==1)
	//	break;
	}
	if(flag==0)
	{
		printf("no such pair of integers\n");
	}
}
