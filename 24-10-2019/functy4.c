//~ without return type and without arguments

#include<stdio.h>
void div()
{
	int n,m;
	scanf("%d%d",&n,&m);
	printf("Div of %d and %d is: %.1f",n,m,(float)n/m);
}

int main()
{
	div();
	return 0;
}
