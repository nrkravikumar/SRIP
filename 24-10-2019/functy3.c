
//~ Without return type and with arguments

#include<stdio.h>

void mul(int o,int p)
{
	printf("Mul of %d and %d is: %d",o,p,o*p);
}

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	mul(n,m);
	return 0;
}
