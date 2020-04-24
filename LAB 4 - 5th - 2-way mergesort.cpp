#include <stdio.h>
void mergesort(int a[],int x,int y);
void merge(int a[],int x,int y,int z);
int count=0;
int main()
{
	int n;
	printf("enter no of integers\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter data :\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d \n",arr[i]);
	}
	printf(" count : %d \n",count);
	
}
void merge(int a[],int x,int y,int z)
{
	count++;
	int h1=y+1-x;
	int h2=z-y;
	int L[h1],R[h2];
	for(int i=0;i<h1;i++)
	{
	L[i]=a[x+i];
    }
	for(int i=0;i<h2;i++)
	{
		R[i]=a[y+1+i];
	 } 
	 int i=0,j=0,k=x;
	 while((i<h1)&&(j<h2))
	 {
	 	if(L[i]<R[j])
	 	{
	 		a[k]=L[i];
	 		i++;
		 }
		 else
		 {
		 	a[k]=R[j];
		 	j++;
		 }
	 	k++;
	 }
	while(i<h1)
	{
		a[k]=L[i];
		k++;i++;
	}
	while(j<h2)
	{
		a[k]=R[j];
		k++;j++;
	}
}
void mergesort(int a[],int x,int y)
{
	if(x<y)
	{
		int m=x+((y-x)/2);
		mergesort(a,x,m);
		mergesort(a,m+1,y);
		merge(a,x,m,y);
	}
}
