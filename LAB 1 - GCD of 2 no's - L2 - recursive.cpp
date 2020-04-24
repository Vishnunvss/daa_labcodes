//gcd of two numbers - euclid - recursive

#include<stdio.h>
long long gcd(long long a,long long b);
int main()
{
	

		long long a,b,r;
		printf("enter data:\n");
		scanf("%d %d",&a,&b);
		if(a==0&&b==0)
		printf("gcd not defined \n");
		else
	{
		 a=(a<0)?-a:a;
		 b=(b<0)?-b:b;
			r=gcd(a,b);
		printf(" gcd: %d\n lcm : %d\n",r,a*b/r);}
		
		
	
	return 1;
}
long long gcd(long long a,long long b)
{
long long x,y;
x=(a>b)?a:b;
y=a+b-x;
if(y==0)
return x;
else
return gcd(y,x%y);
}
	
	
	
	
	
	
	
	
	
	
