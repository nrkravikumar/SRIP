
#include<stdio.h>

int main()
{
	int n,k,c=0,j=0,i;
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	int arr[c];
	n=k;
	while(n!=0)
	{
		arr[j]=n%10;
		j++;
		n=n/10;
	}
	for(i=0;i<c;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n"); 
	for(i=c-1;i>=0;i--)
	{
		switch(arr[i])
		{
			case 9:printf("Nine ");break;
			case 7:printf("Seven ");break;
			case 4:printf("Four ");break;
			case 6:printf("Six ");break;
			case 5:printf("Five ");break;
			case 8:printf("Eight ");break;
			case 1:printf("One ");break;
			case 3:printf("Three ");break;
			case 0:printf("Zero ");break;
			default:printf("Two ");
		}
	}
	return 0;
}
