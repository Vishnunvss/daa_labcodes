//lcm of two numbers using dc

#include<stdio.h>
int gcd(int a,int b);
int lcm(int a,int b);
int divide(int a[],int start,int end);
int main()
{
	int arr[100],n,flag=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter input\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]!=0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("lcm is 0\n");
		return 1;
	}
	printf("lcm is %d\n",divide(arr,0,n-1));
}
int divide(int a[],int start,int end)
{
	if((start==end)||(start+1)==end)
	{
		return lcm(a[start],a[end]);
	}
	int m=(start+end)/2;
	lcm(divide(a,start,m),divide(a,m+1,end));
}
int lcm(int a,int b)
{
	int g=gcd(a,b);
	return (a*b)/g;
}

	int gcd(int a,int b)
{
	int x,y,temp;
	x=(a<0)?-a:a;
	y=(b<0)?-b:b;
	if(x<y)
	{
		temp=y;
		y=x;
		x=temp;
	}
	if(y==0)
	return x;
	else
	return gcd(y,x%y);
}

