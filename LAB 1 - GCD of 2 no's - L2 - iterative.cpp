//gcd of two numbers -euclid - iterative

#include <stdio.h>
int gcd(int x,int y);
int main()
{
	int n1,n2;
	printf("enter two numbers:\n");
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
	int num,den,rem;
    num=(x>y)?x:y;
    den=x+y-num;
    if(den==0)
    return num;
    else
    {
	rem=num%den;
	while(rem!=0)
	{
		num=den;
		den=rem;
		rem=num%den;
	}
	return den;}
}
