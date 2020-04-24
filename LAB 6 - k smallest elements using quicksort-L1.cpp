#include <stdio.h>
#include <stdlib.h>
int quicksort(int arr[],int low,int high,int size,int k);
int swap(int *a,int *b);
int main()
{
	int n,k;
	printf("enter no of elements :\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements\n");
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter k\n");
	scanf("%d",&k);
	quicksort(arr,0,n-1,n,k);
	printf(" %d smallest elements in given array of numbers :\n",k);
	for(int i=0;i<k;i++)
	{
		printf("%d  ",arr[i]);
	}
}
int quicksort(int arr[],int low,int high,int size,int k)
{
	if(low<high)
	{
		int index=arr[high];
		int i;
		 i = (low - 1);
		 for(int j=low;j<high;j++)
		 {
		 	if(arr[j]<arr[high])
		 	{
		 		i++;
		 		swap(&arr[i],&arr[j]);
		 	/*	 for(int i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");*/
			 }
		 }
		 swap(&arr[i+1],&arr[high]);
		 int pivot=i+1;
		
//	printf("\nlow %d  pivot %d  high %d\n",low,pivot,high);
	     if((pivot-low)<k)
	     {
		 
		 quicksort(arr,low,pivot-1,size,k);
		 quicksort(arr,pivot+1,high,size,k);
	}
	}
}
int swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
