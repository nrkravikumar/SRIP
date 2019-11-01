#include<stdio.h>

void readarray(int m,int a[])
{
	int i;
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
}
void sumar(int l,int d[],int e[])
{
	int i;
	for(i=0;i<l;i++)
	{
		printf("%d ",d[i]+e[i]);
	} 
}

void printarray(int l,int k[])
{
	int i;
	for(i=0;i<l;i++)
	{
		printf("%d ",k[i]);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int ar[n],br[n];
	readarray(n,ar);
	printarray(n,ar);
	printf("\n");
	readarray(n,br);
	printarray(n,br);
	printf("\nSum of 2 arrays are: \n");
	sumar(n,ar,br);
	return 0;
}
