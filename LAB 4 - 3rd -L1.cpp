//count no of -ve numbers using dc

#include <stdio.h>
int count(int a[],int x,int y);
int main()
{
	int n;
	printf("enter the size of array \n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the data:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the no.of -ve no's %d\n",count(arr,0,n-1));
}
int count(int a[],int x,int y)
{
	if(x==y)
	{
		if(a[x]<0)
		return 1;
		else 
		return 0;
	}
	else
	return count(a,x,(x+y)/2)+count(a,((x+y)/2)+1,y);
}
