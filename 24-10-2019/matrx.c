
#include<stdio.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);
	int ar[n][n],br[n][n];
	printf("Enter First array elements: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	printf("\nEntered first array elements are: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%02d ",ar[i][j]);
		}
		printf("\n");
	}
	printf("Enter Second array elements: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&br[i][j]);
		}
	}
	printf("Entered second array elements are: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%02d ",br[i][j]);
		}
		printf("\n");
	}
	printf("\nResultant Addition of 2 arrays: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%02d ",ar[i][j]+br[i][j]);
		}
		printf("\n");
	}
	return 0;
}
