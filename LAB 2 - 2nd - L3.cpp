//find position of -1 with given condition of elements in non - decreasing order

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
	
}
int position(int a[])
{
	int j=0;
	if(a[0]==-1)
{
		return 0;}
	else
	{
	
	while(a[j]<=a[j+1])
	{
		j++;
	}
	return j+1;}
}
