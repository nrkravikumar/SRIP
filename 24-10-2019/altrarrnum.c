
#include<stdio.h>
#include "rpar.h"

int main()
{
	int n,i,k=0;
	scanf("%d",&n);
	int s1[n],s2[n],s3[n+n];
	readarray(n,s1);
	readarray(n,s2);
	//~ for(i=0;i<n;i++)
	//~ {
		//~ printf("%d %d ",s1[i],s2[i]);
	//~ }
	for(i=0;i<n+n;i++)
	{
		s3[k]=s1[i];
		k++;
		s3[k]=s2[i];
		k++;
	}
	for(i=0;i<n+n;i++)
	{
		printf("%d ",s3[i]);
	}
	return 0;
}
