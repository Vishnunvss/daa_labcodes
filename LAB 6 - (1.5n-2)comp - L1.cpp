//FIND MIN,MAX PAIR USING 1.5N-2 COMPARISIONS

#include <stdio.h>
#include <stdlib.h>
int pair(int a[],int n);
int main()
{
	int n;
	printf("enter no of integers:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	pair(arr,n);
}
int pair(int a[],int n)
{
	int max,min;//count=1;
	if(a[0]<a[1])
	{
		min=a[0];max=a[1];
	}
	else
	{
		min=a[1];max=a[0];
	}
	int i;
	
	for( i=2;i<n-1;i=i+2)
	{
	   	if(a[i]<a[i+1])
	   	{
	   		if(min>a[i])
	   		{
			min=a[i];}
	   	
	   		if(max<a[i+1])
	   		{
			   
	   		max=a[i+1];
	   	}
	   		//count=count+2;
		}
		else
		{
           if(min>a[i+1])
           {
		   
           min=a[i+1];
       }
           if(max<a[i])
           {
		   
           max=a[i];}
           //count=count+2;
		}
		//count++;
	}
	if(i==n-1)
	{
		if(a[i]<min)
		min=a[i];
		if(a[i]>max)
		max=a[i];
		//count=count+2;
	}
	
	printf("max : %d \n min : %d \n \n",max,min);
}
