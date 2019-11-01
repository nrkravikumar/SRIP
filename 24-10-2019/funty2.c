//~ with return type and without arguments

#include<stdio.h>

int diff()
{
	int n,m;
	scanf("%d%d",&n,&m);
	printf("Diff of %d and %d is: ",n,m);
	return n-m;
}

int main()
{
	printf("%d",diff());
	return 0;
}
