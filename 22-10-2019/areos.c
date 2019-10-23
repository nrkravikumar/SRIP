
#include<stdio.h>

int main()
{
	int n,i,ec=0,es=0,oc=0,os=0,k=0,l=0;
	scanf("%d",&n);
	int arr[n],ea[k],oa[l];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			ec++;
			es+=arr[i]; 
			ea[k]=arr[i];
			k++;
		}
		else
		{
			oc++;
			os+=arr[i];
			oa[l]=arr[i];
			l++;
		}
	}
	printf("even numbers Count are: %d\nodd numbers count : %d\neven numbers sum is: %d\nodd numbers sum is: %d\n",ec,oc,es,os);
	printf("Even digits in number are: ");
	for(i=0;i<k;i++)
	{
		printf("%d ",ea[i]);
	}
	printf("Odd digits in number are: ");
	for(i=0;i<l;i++)
	{
		printf("%d ",oa[i]);
	}
	return 0;
}
