//take a number , calculate it's binary form and perform multiplication in binary : (log n)^2

#include <stdio.h>
#include <stdlib.h>
int multiply(int n);
int main()
{
	int n;
	printf("enter an integer :\n");
	scanf("%d",&n);
	multiply(n);
}
int multiply(int n)
{
	n=(n<0)?-n:n;
	int arr[n];
	int temp=n,rem=0,index=0,l=0,k=0,carry=0;
	while(temp!=0)
	{
		arr[index++]=temp%2;
		temp=temp/2;
	}
	int result[2*index];
	for(int i=0;i<2*index;i++)
	{
		result[i]=0;
	}
	
	for(int i=0;i<index;i++)
	{
		l=k;
		for(int j=0;j<index;j++)
		{
			result[l]=result[l]+(arr[i]*arr[j])+carry;
			if(result[l]>1)
			{
				carry=result[l]/2;result[l]=result[l]%2;
			}
			else
			{
				carry=0;
			}
			
			l=l+1;
		}
		if(carry!=0)
		{
			if(result[l]==0)
			{
				result[l]=1;carry=0;
			}
			else
			{
			result[l]=0;result[l+1]=1;carry=0;	
			}
		}
		k=k+1;
	}
	printf("\n");
	for(int i=l;i>=0;i--)
	{
		printf("%d",result[i]);
	}
}
