//gcd of two numbers : steins algorithm -iterative

#include <stdio.h>
int gcd(int a,int b);
int main()
{
	int n1,n2;
	printf("enter data:\n");
	scanf("%d %d",&n1,&n2);
	if(n1==0&&n2==0)
	printf("gcd not defined\n");
	else
	printf("gcd is %d\n",gcd(n1,n2));
	
}
int gcd(int x,int y)
{
	int a,b,k=0;
	a=(x<0)?-x:x;
	b=(y<0)?-y:y;
	if(a==0)
	return b;
	 if(b==0)
	return a;
for (k = 0; ((a | b) & 1) == 0; ++k) 
	{ 
		
		a >>= 1; 
		b >>= 1; 
			
	} 
	while(a&1==0)
	a>>=1;
	
	while(b!=0)
	{
		while ((b&1) == 0) 
			b >>= 1; 
			
           if (a > b) 
			{
				int z;
				z=a;
				a=b;
				b=z;
			}
        b = (b - a); 
	}
	
	return a<<k;
	
}
