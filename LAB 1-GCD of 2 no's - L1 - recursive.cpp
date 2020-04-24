
//gcd of two numbers - regular - recursive

#include <stdio.h>
int gcd(int x,int y);
int GCD(int x,int y,int z);
int main()
{
		int n1,n2,x,y;
	printf("enter data :\n");
	scanf("%d %d",&n1,&n2);
	if(n1==0&&n2==0)
    printf("not defined\n");
	else
    {
    	n1=(n1<0)?-n1:n1;
    	n2=(n2<0)?-n2:n2;
    		printf("gcd is : %d\n",gcd(n1,n2));
	}
}
int gcd(int a,int b)
{
	int x,y;
	x=(a>b)?a:b;
	y=a+b-x;

	if(y==0)
	return x;
    else if(x%y==0)
	return y;
	else
	return GCD(x,y,y/2);
}
int GCD(int a,int b,int c)
{
	if((a%c==0)&&(b%c==0))
	return c;
	else
	return GCD(a,b,c-1);
}
