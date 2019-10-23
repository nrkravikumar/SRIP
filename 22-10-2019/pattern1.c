#include<stdio.h>

int main()
{
	int i,j,a=1;
	//~ scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(a>31)
			{
				break;
			}
			else if(a%2==0)
			{
				printf("** ");
			}
			else if(a==17||a==31)
			{
				printf("$$ ");
			}
			else
			{
				printf("%02d ",a);
			}
			a++;
		}
		printf("\n");
	}
	return 0;
}
