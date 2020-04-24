//gcd of two numbers : steins algorithm - recursive

#include <stdio.h>
int gcd(int x,int y);
int main()
{
	int n1,n2;
	printf("enter data :\n");
	scanf("%d %d",&n1,&n2);
	if(n1==0&&n2==0)
	printf("gcd is not defined \n");
	else
	printf("gcd is %d\n",gcd(n1,n2));
}
int gcd(int x,int y)
{
	int a,b,z;
	a=(x<0)?-x:x;
	b=(y<0)?-y:y;
	//printf("# %d %d  #",a,b);
	
	if(a==b||a==0)
	return b;
	if(b==0)
	return a;
	if((a&1)==0)
	{
		if((b&1)==0)
		return gcd(a>>1,b>>1)<<1;
		else
		return gcd(a>>1,b);
	}
	if((b&1)==0)
	return gcd(a,b>>1);
	
	if(a>b)
	return gcd((a-b)>>1,b);
	
	return gcd((b-a)>>1,a);
}
