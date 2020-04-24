//logic to obtain leaves of size 10 from array of size 1000 , is same as to obtain leaves of size 10000 from array of size 1000000 , so N can be replaced by 1000000 

#include <stdio.h>
#include<stdlib.h>
#define N 1000//change N value here to obtain o/p for 1000000 array
void mergesort(int a[],int x,int y);
void merge(int a[],int x,int y,int z);
void insertionsort(int a[],int low,int high);
void arrdata(int a[])
{
 srand(0);
 for (int i = 0; i < N; ++i)
 a[i] = rand() / 1000000;
}
int main()
{
int a[N];
int n=N;
arrdata(a);
	mergesort(a,0,n);
	for(int i=0;i<N;i++)
	{
		printf(" < %d >",a[i]);
	}
	

}

void mergesort(int a[],int x,int y)
{
if(x<y)
{
if(y-x<=N/100)
{
insertionsort(a,x,y-1);
}
else
{
int adj=(y-x)/10;
int arr[11];
for(int i=0;i<11;i++)
{arr[i]=i*adj;}

for(int i=0;i<10;i++)
{
mergesort(a,x+arr[i],x+arr[i+1]);
}
//for(int i=0;i<)
for(int i=1;i<10;i++)
{
merge(a,x+arr[0],x+arr[i],x+arr[i+1]);
}
}

}
}

void insertionsort(int a[],int low,int high)
{
int i,key,j;
for(int i=low;i<=high;i++)
{
key=a[i];
j=i-1;
while(j>=0 && a[j]>key)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;
}
}



void merge(int a[],int x,int y,int z)
{
	int h1=y-x;
	int h2=z-y;
	int L[h1],R[h2];
	for(int i=0;i<h1;i++)
	{
	L[i]=a[x+i];
    }
	for(int i=0;i<h2;i++)
	{
		R[i]=a[y+i];
	 } 
	 int i=0,j=0,k=x;
	 while((i<h1)&&(j<h2))
	 {
	 	if(L[i]<R[j])
	 	{
	 		a[k]=L[i];
	 		i++;
		 }
		 else
		 {
		 	a[k]=R[j];
		 	j++;
		 }
	 	k++;
	 }
	while(i<h1)
	{
		a[k]=L[i];
		k++;i++;
	}
	while(j<h2)
	{
		a[k]=R[j];
		k++;j++;
	}
}
