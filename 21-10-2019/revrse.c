#include<stdio.h>
 int main()
{
	int n,i=0,s,k,rev=0,ev=0,od=0;
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		s=n%10;
		if(s%2==0)
		{
			ev++;
		}
		else
		{
			od++;
		}
		rev=rev*10+s;
		i++;
		n=n/10;  
	}
	printf("Given number is: %d\nReverse is : %d\nThe length of a number is: %d\nEven Digit count in number is: %d\nOdd Digit count in number is: %d",k,rev,i,ev,od);
	return 0;
}
