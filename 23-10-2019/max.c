#include<stdio.h>
int main()
{
	int n,i,max,min;
	printf("enter size");
	scanf("%d",&n);
	printf("enter values");
	int a[n];
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
		else
		{
			max=min;
		}
	}
	printf("%d\n%d",max,min);
	return 0;
}
