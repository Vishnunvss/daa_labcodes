#include<stdio.h>
#include<stdlib.h>
struct heap
{
int a[2][100];
int last;
};
struct heap h;
int sort(int data[],int size[],int count,int number);
void swap(int *a,int *b);
void insert(int id,int t);
int del();
int main()
{
	int main[100000];
	int k;
	int count=0;
	printf("enter the no of arrays:\n");
	scanf("%d",&k);
	int si[k];
	for(int i=0;i<k;i++)
	{
		printf("enter the size of %d array:",i+1);
		scanf("%d",&si[i]);
		for(int j=0;j<si[i];j++)
		{
			scanf("%d",&main[count+j]);
		}
		count=count+si[i];
	}
  sort(main,si,count,k);
  
}
int sort(int data[],int size[],int count,int number)
{
	 int pointer[number];int sizerange[number];
	 	 pointer[0]=0;int pointercount=0,sizer=0;
	 	 for(int i=0;i<number;i++)
	 	 {
	 	 	pointer[i]=pointercount;
	 	 	pointercount=pointercount+size[i];
		  }
		  /*printf("pointers\n");
		  for(int i=0;i<number;i++)
		  {
		  	printf("%d  ",pointer[i]);
		  }
		  printf("\n");*/
		  //printf("sizerange\n");
		  for(int i=0;i<number;i++)
		  {
		  	sizer=sizer+size[i];
		  	sizerange[i]=sizer;
		  	
		  }
		 /* for(int i=0;i<number;i++)
		  {
		  	printf(" %d  ",sizerange[i]);
		  }*/
		  printf("\n");
		  int final[count];
          int finalindex=0;

	 for(int i=0;i<number;i++)
	 {
	 	if(pointer[i]<sizerange[i])
	 	{ 
	 		insert(data[pointer[i]],i);
		 }
	 }
	 while(h.last!=0)
	 {
	 	final[finalindex++]=h.a[0][1];
	 	int deindex=h.a[1][1];
	 	pointer[h.a[1][1]]++;
	 	del();
	 	if(pointer[deindex]<sizerange[deindex])
	 	insert(data[pointer[deindex]],deindex);
	 }
	 for(int h=0;h<count;h++)
	 {
	 	printf(" %d  ",final[h]);
	 }
	 
}


void swap(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}
void insert(int id,int t)
{
h.last++;
h.a[0][h.last]=id;
h.a[1][h.last]=t;
int x=h.last;
while(x/2>=1&&h.a[0][x]<h.a[0][x/2])
{
swap(&h.a[0][x],&h.a[0][x/2]);
swap(&h.a[1][x],&h.a[1][x/2]);
x=x/2;
}
}
int del()
{
int x=h.a[1][1];
h.a[0][1]=h.a[0][h.last];
h.a[1][1]=h.a[1][h.last];
h.last--;
int t=1;
int i;
while(2*t<=h.last)
{
 if(2*t+1<=h.last)
{
  if(h.a[0][2*t]<h.a[0][2*t+1])
    i=2*t;
else
i=2*t+1;
}
else
i=2*t;
if(h.a[0][t]>h.a[0][i])
{
 swap(&h.a[0][t],&h.a[0][i]);
 swap(&h.a[1][t],&h.a[1][i]);
t=i;
}
else
break;
}
return x;
}
