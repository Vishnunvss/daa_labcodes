//towers of hanoi 

#include <stdio.h>
void towersofhanoi(int n,char from,char dest,char temp);
int main()
{
	int n;
	char A,B,C;
	printf("enter the no of disks\n");
	scanf("%d",&n);
	towersofhanoi(n,'A','C','B');
}
void towersofhanoi(int n,char from,char dest,char temp)
{
	if(n==1)
	{
		printf("move disc 1 from %c to %c\n",from,dest);
		return;
	}
	towersofhanoi(n-1,from,temp,dest);
	printf("move disc %d from %c to %c\n",n,from,dest);
	towersofhanoi(n-1,temp,dest,from);
}
