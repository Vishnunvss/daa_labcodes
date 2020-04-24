//gcd of two numbers - regular - iterative

#include<stdio.h>
int gcd(int x,int y);
int main()
{
	int n1,n2;
	printf("enter data :\n");
	scanf("%d %d",&n1,&n2);
	if(n1==0&&n2==0)
	printf("not defined\n");
	if(n1!=0||n2!=0)
	{
		n1=(n1<0)?-n1:n1;
		n2=(n2<0)?-n2:n2;
		printf("gcd is : %d \n",gcd(n1,n2));
	}
	
}
int gcd(int x,int y)
{
	int gcd,m,n,i;
	
	m=(x>y)?x:y;
	n=x+y-m;
	if(n==0)
	return m;
	if(m%n==0)
	return n;
	else
	{
		for(i=n/2;i>=1;i--)
		{
			if((x%i==0)&&(y%i==0))
			return i;
		}
	}
}
