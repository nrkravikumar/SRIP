

#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("198R1A01%02d\t188R1A01%02d\t178R1A01%02d\n",i,i,i);
		//~ if(i<=9)
		//~ {  
			//~ printf("198R1A010%d\n",i);
		//~ }
		//~ else
		//~ {
			//~ printf("198R1A01%d\n",i);
		//~ }
	}
	return 0;
}
