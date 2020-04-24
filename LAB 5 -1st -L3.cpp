//sort k-sorted arrays using k pointers

#include<stdio.h>
int sort(int a[],int size[],int total);
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
	sort(main,a,k);
	for(int r=0;r<count;r++)
	{
		printf("%d ",main[r]);
	}
	
}
int sort(int a[],int size[],int total)
{
	int k=total;
	int pointer[k],count=0;
	pointer[0]=0;
	int i;
	for( i=1;i<total;i++)
	{
		count=count+size[i-1];
		pointer[i]=count;
	}
	count=count+size[i-1];
	int b[count],indexb=0;
	for(int i=0;i<k;i++)
	{
		size[i+1]=size[i+1]+size[i];
	}
	int sizea=count;
	/*for(int u=0;u<k;u++)
	{
		printf(" %d  %d \n",size[u],pointer[u]);
	}*/
	while(count)
	{
		int index,min;
		int h=0;
		while(1)
		{
			if(pointer[h]<size[h])
			{
				min=a[pointer[h]];index=h;break;
			}
			else
			h++;
		}
		for(int h=0;h<k;h++)
		{
		   if(pointer[h]<size[h])
		   {
		   	if(min>a[pointer[h]])
		   	{
		   		min=a[pointer[h]];index=h;
			   }
		   }
		}
		b[indexb++]=min;
		pointer[index]++;
		count--;
	}
	for(int w=0;w<sizea;w++)
	{
		a[w]=b[w];
	}
}

