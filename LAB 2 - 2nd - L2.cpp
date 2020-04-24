//find position of -1 using linear search

#include <stdio.h>
int position(int a[]);
int main()
{
	int a[10000];
	int z=1,data,i=0;
	printf("enter data and -1 to stop :\n");
	while(z)
	{
		scanf("%d",&a[i]);
		i++;
		if(a[i-1]==-1)
		{
			for(int n=i;n<10000;n++)
			a[n]=-1;
	    	z=0;
		}
	}
	
	printf("position is : %d \n",position(a)+1);
	return 1;
}
int position(int a[])
{
	int i=0;
	while(1)
	{
		
		if(a[i]==-1)
		return i;
		else
		i++;
		
	}
}
