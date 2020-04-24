//GCD of 2 no's using DC

#include <stdio.h>
int gcd(int a,int b);
int GCD(int a[],int x,int y);
int main()
{
	int n;
	printf("enter no of integers\n");
	scanf("%d",&n);
	int arr[n],sum=0;
	printf("enter data\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	if(sum==0)
	{
		printf("gcd is not defined\n");
		return 1;
	}
	else
   {
	   	printf("the gcd is %d\n",GCD(arr,0,n-1));
	   }
}
int GCD(int a[],int x,int y)
{
	if(x<=y)
	{
	
//	printf(" %d %d \n",x,y);
	if(x==y)
	return a[x];
	else if(x+1==y)
	return gcd(a[x],a[y]);
	else
	{
		/*int i=x,j=y;printf("i=%d j=%d\n",i,j);
		while(i<=j)
		{
			printf("the no,s at %d - %d are %d - %d\n",i,a[i],j,a[j]);
			a[i]=gcd(a[i],a[j]);
			printf("modified %d - %d\n",i,a[i]);
			i++;j--;
		}
		return GCD(a,x,(x+y)/2);*/
			
		int mid=(x+y)/2;
		
		
		return gcd(GCD(a,x,mid),GCD(a,mid,y));
	}
}
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
