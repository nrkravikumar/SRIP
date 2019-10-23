
//~ 3
//~ 20 23 27
//~ 20 even
//~ 23 odd
//~ 27 odd


#include<stdio.h>

int main()
{
	int n,i,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		if(m%2==0)
		{
			printf("%d even\n",m);
		}
		else
		{
			printf("%d odd\n",m);
		}
	}
	return 0;
}

