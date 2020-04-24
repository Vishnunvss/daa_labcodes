//DIVIDING K ARRAYS INTO 2 SETS AND SPLITIING THEM UNTIL THEY BECOME 2 AND THEN MERGING 2 ARRAYS(BOTTOM -UP)

#include<stdio.h>
int mergesort(int a[],int size[],int start,int mid,int end);
int mergecall(int a[],int size[],int start,int end);
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
		for(int j=0;j<a[i];j++)
		{
			scanf("%d",&main[count+j]);
		}
		count=count+a[i];
	}
	mergecall(main,a,0,k-1);
	for(int i=0;i<count;i++)
	{
		printf("%d  ",main[i]);
	}
}
int mergecall(int a[],int size[],int start,int end)
{
	if(start<end)
	{
		int m=start+((end-start)/2);//printf(" %d %d-m %d\n",start,m,end);
		mergecall(a,size,start,m);
		mergecall(a,size,m+1,end);
		mergesort(a,size,start,m,end);
	}
}
int mergesort(int a[],int size[],int first,int second,int third)
{
	int ind1=0,ind2=0,ind3=0,index1=0,index2=0,index3=0;
	while(ind1<first)
	{
		index1=index1+size[ind1];ind1++;
	}
	while(ind2<=second)
	{
		index2=index2+size[ind2];ind2++;
	}
	while(ind3<=third)
	{
		index3=index3+size[ind3];ind3++;
	}
	
	
	int i=index1,j=index2;
	//printf("ind1 %d ; index1 %d;index2 %d,index3 %d\n",ind1,index1,index2,index3);
	int temp=index3-index1;
	int b[temp];int k=0;
	while((i<index2)&&(j<index3))
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
	while(i<index2)
	{
		b[k]=a[i];i++;k++;
	}
	while(j<index3)
	{
		b[k]=a[j];j++;k++;
	}
	int t=0;
	for(int r=index1;r<index3;r++)
	{
		a[r]=b[t];t++;
	}
}
