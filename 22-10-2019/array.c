
#include<stdio.h>

int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	int ae[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ae[i]);
		sum+=ae[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",ae[i]);
	}
	printf("\nSum of Numbers in array are: %d",sum);
	return 0;
}

