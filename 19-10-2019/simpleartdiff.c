//~ Inputs:
		//~ 10 4
		//~ 14.0 2.0
//~ Output:
		//~ 14 6
		//~ 16.0 12.0
		
#include<stdio.h>

int main()
{
	int n,m;
	float a,b;
	scanf("%d%d%f%f",&n,&m,&a,&b);
	printf("%d %d\n%.1f %.1f",n+m,n-m,a+b,a-b);
	return 0;
}




