//pair to make a sum - traversing array from both sides

#include <stdio.h>
void bubblesort(int a[],int size);
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
	int i=0,r=size-1,flag=0;
	bubblesort(a,size);

	while(i<r)
	{
		if(a[i]+a[r]==p)
		{
			printf("pair is present %d %d\n",a[i],a[r]);
			flag=1;
			return 1;
		}
		else if(a[i]+a[r]<p)
		i++;
		else
		r--;
	}
	if(flag==0)
	{
		printf("no such pair \n");
		return -1;
	}
}

void bubblesort(int a[],int size)
{
int temp;
 for(int i=0;i<size;i++)
 {for(int j=0;j<size-i-1;j++)
  {
   if(a[j]>a[j+1])
   {temp=a[j+1];
    a[j+1]=a[j];
    a[j]=temp;
}}}}
