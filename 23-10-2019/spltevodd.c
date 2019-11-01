#include<stdio.h>

int main()
{
	int n,k=0,l=0,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int e[k],o[l];
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			e[k]=arr[i];
			k++;
		}
		
		else
		{
			o[l]=arr[i];
			l++;
		}
	}
	printf("Even numbers are: ");
	for(i=0;i<k;i++)
	{
		printf("%d ",e[i]);
	}
	printf("\nOdd numbers are: ");
	for(i=0;i<l;i++)
	{
		printf("%d ",o[i]);
	}
	return 0;
}
