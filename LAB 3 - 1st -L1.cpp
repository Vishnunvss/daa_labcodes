//sorting ternary array 1

#include <stdio.h>
int* print(int a[],int size);
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
	int *res=print(arr,n);

	
}
int* print(int a[],int size)
{
	int q=0,k=0;int b[size];
	while(k<=2)
	{
		for(int j=0;j<size;j++)
		{
			if(k==a[j])
			{
				b[q]=a[j];
				q++;
			}
		}
		k++;
	}
	printf("in print\n");
		for(int i=0;i<size;i++)
	{
		printf("%d\n",b[i]);
	}
	
	return b;
}
