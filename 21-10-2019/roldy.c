

#include<stdio.h>

int main()
{
	int n,i,p,d;
	scanf("%d%d%d",&n,&p,&d);
	for(i=n;i<=p;i++)
	{
		if(i==d)
		{
			continue;
		}
		printf("198R1A0%d\n",i);
	}
	return 0;
}
