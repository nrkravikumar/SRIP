
#include<stdio.h>

int main()
{
	int n,k,co=0,l=0,i;
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		n=n/10;
		co++;
	}
	n=k;
	int ar[co];
	while(n!=0)
	{
		ar[l]=n%10;
		l++;
		n=n/10;
	}
	for(i=l-1;i>=0;i--)
	{
		switch(ar[i])
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
