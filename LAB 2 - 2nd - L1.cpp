//find position of -1 using binary search

#include <stdio.h>
int position(int a[]);
int interval(int a[],int k,int l);
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
	//printf("position is :");
	printf("position is : %d \n",position(a)+1);
	return 1;
}
int position(int a[])
{
	int k=0,l=1;
     while(1)
     {
     	 if(a[k]==-1)
     	 return k;
     	 else if((a[k]!=-1)&&(a[l]==-1))
         return interval(a,k,l);
		 else
		 {
		 	k=k<<1;l=l<<1;
		 }		  
	 }

}
int interval(int a[],int k,int l)
{
	 if(a[k]==-1)
	 return k;
	 else if((a[k]!=-1)&&(a[(k+l)/2]==-1))
	 return interval(a,k,(k+l)/2);
	 else
	 return interval(a,((k+l)/2)+1,l);
}
