//sort k arrays in an incremental way

#include<stdio.h>
#include<stdlib.h>
int sortk(int line[],int size[],int total);
int mergesort(int a[],int start,int mid,int end);
int main()
{

	int main[100000];
	
	int k;
	int count=0;
	printf("enter the no of arrays:\n");
	scanf("%d",&k);
	int a[k];
	for(int i=0;i<k;i++)
	{
		printf("enter the size of %d array:",i+1);
		scanf("%d",&a[i]);
		printf("enter elements\n");
		for(int j=0;j<a[i];j++)
		{
			scanf("%d",&main[count+j]);
		}
		count=count+a[i];
	}
/*	for(int f=0;f<count;f++)
	{
	printf("%d  ",main[f]);
}*/
sortk(main,a,k);
printf("function called\n");
for(int f=0;f<count;f++)
	{
	printf("%d  ",main[f]);
}
return 0;
}
int sortk(int line[],int size[],int total)
{
	int count=size[0];
	for(int y=0;y<total-1;y++)
	{
	    int mid=count;
	    int end=count+size[y+1];
		mergesort(line,0,mid,end);
		count=count+size[y+1];
	}
}
int mergesort(int a[],int start,int mid,int end)
{
	int tempsize=end-start;
	int b[tempsize];
	int i=0,j=mid,k=0;
	while((i<mid)&&(j<end))
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];i++;k++;
		}
		else
		{
			b[k]=a[j];k++;j++;
		}
	}
	while(i<mid)
	{
		b[k]=a[i];i++;k++;
	}
	while(j<end)
	{
		b[k]=a[j];j++;k++;
	}
	int t=0;
	for(int r=start;r<end;r++)
	{
		a[r]=b[t];t++;
	}
}
