//printing patterns

#include <stdio.h>
int pattern1(int n);
int main()
{
	int n;
	printf("enter the integer :\n");
	scanf("%d",&n);
	pattern1(n);
	return 1;
}
int pattern1(int n)
{
	printf("pattern 1\n");
	
	int l=n;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=l;j++)
		{
			printf("%d",j);
		}
		printf("\n");
		l--;
	}
printf("\n");

	printf("pattern 2\n");
		l=n;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j>i)
			printf("%d",j);
			else
			printf(" ");
		}
		printf("\n");
	}
printf("\n");
	
printf("pattern3\n");
	 l=1;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=l;j++)
		{
			printf("%d",j);
		}
		printf("\n");
		l++;
	}
	printf("\n");
	
	printf("pattern4\n");
		 l=n;
	for(int i=4;i>=0;i--)
	{
		for(int j=1;j<=n;j++)
		{
			if(j>i)
			printf("%d",j);
			else
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	printf("pattern5\n");
	 l=1;int r=n,size=n;
	for(int i=0;i<n;i++)
	{
		
		
		for(int j=1;j<=n;j++)
		{
		
			if((j>=l&&j<=r)||(j>=r&&j<=l))
			printf("%d",j);
			else
			printf(" ");}printf("\n");l++;r--;
		}
	printf("\n");
}
