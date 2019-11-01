#include<stdio.h>

int main()
{
	int n,i,j,t,m;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(ar[i]>ar[j])
			{
				t=ar[i];
				ar[i]=ar[j];
				ar[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
	scanf("%d",&m);
	printf("\n%d ",ar[n-m]);
	return 0;
}
