//3-way merge sort

#include <stdio.h>
void mergesort(int a[],int start,int end);
void merge(int a[],int start,int mid1,int mid2,int end);
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
	mergesort(arr,0,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}

void mergesort(int a[],int start,int end)
{
	if((end-start)<2)
	{
	//printf("%d,%d\n",start,end);
	return;
}
	int mid1=start+((end-start)/3);
	int mid2=start+2*((end-start)/3)+1;
	//printf("%d-%d-%d-%d\n",start,mid1,mid2,end);
	mergesort(a,start,mid1);
	mergesort(a,mid1,mid2);
	mergesort(a,mid2,end);
	
	
	merge(a,start,mid1,mid2,end);
	//printf("\n");
}

void merge(int a[],int start,int mid1,int mid2,int end)
{
	int p1=mid1-start;
	int p2=mid2-mid1;
	int p3=end-mid2;
	int q1[p1];
	int q2[p2];
	int q3[p3];
	for(int i=0;i<p1;i++)
	{
		q1[i]=a[start+i];
	}
	for(int i=0;i<p2;i++)
	{
		q2[i]=a[mid1+i];
	}
	for(int i=0;i<p3;i++)
	{
		q3[i]=a[mid2+i];
	}
	int i=0,j=0,k=0,index=start;
	while((i<p1)&&(j<p2)&&(k<p3))
	{
		if(q1[i]<=q2[j])
		{
			if(q1[i]<=q3[k])
			{
				a[index++]=q1[i++];
			}
			else{
				a[index++]=q3[k++];
			}
			
		}
		else
		{
			if(q2[j]<=q3[k])
			{
				a[index++]=q2[j++];
			}
			else
			{
				a[index++]=q3[k++];
			}
		}
	}
	while((i<p1)&&(j<p2))
	{
		if(q1[i]<=q2[j])
		a[index++]=q1[i++];
		else
		a[index++]=q2[j++];
	}
	while((k<p3)&&(j<p2))
	{
		if(q2[j]<=q3[k])
		a[index++]=q2[j++];
		else
		a[index++]=q3[k++];
	}
	while((i<p1)&&(k<p3))
	{
		if(q1[i]<=q3[k])
		a[index++]=q1[i++];
		else
		a[index++]=q3[k++];
	}
	while(i<p1)
	{
	a[index++]=q1[i++];}
	while(j<p2)
	{
	a[index++]=q2[j++];}
	while(k<p3)
	{
		a[index++]=q3[k++];
	}
}
