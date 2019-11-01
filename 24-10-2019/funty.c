#include<stdio.h>
int sum(int h,int l);

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	printf("Sum of %d and %d is: %d",n,m,sum(n,m));
	return 0;
}
//With return type and with arguments
int sum(int h,int l)
{
	return h+l;
}

