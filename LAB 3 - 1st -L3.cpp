//sorting a ternary array using bubble sort

#include<stdio.h>
int bubblesort(int a[],int size);
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
	bubblesort(arr,n);
}
int bubblesort(int a[],int size)
{ 
int temp;
 for(int i=0;i<size;i++)
 {
 for(int j=0;j<size-i-1;j++)
  { if(a[j]>a[j+1])
   {
   temp=a[j+1];
    a[j+1]=a[j];
    a[j]=temp;
}}
}
printf("\n");
for(int i=0;i<size;i++)
{
printf(" %d ",a[i]);	
}
}
