//sorting ternary array

#include<stdio.h>
int print(int a[],int size);
int main()
{
int arr[100],n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter input\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}	
	print(arr,n);
}
int print(int a[],int size)
{
	int pa[size],qa[size],ra[size],p=0,q=0,r=0;
	for(int i=0;i<size;i++)
	{
		if(a[i]==0)
		{
			pa[p]=a[i];p++;
		}
		else if(a[i]==1)
		{
			qa[q]=a[i];q++;
		}
		else
		{
			ra[r]=a[i];r++;
		}
	}
	printf("result is\n");
	for(int i=0;i<p;i++)
	{printf("%d\n",pa[i]);
	}
	for(int i=0;i<q;i++)
	{printf("%d\n",qa[i]);
	}
	for(int i=0;i<r;i++)
	{printf("%d\n",ra[i]);
	}
	
	
}
