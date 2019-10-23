//~ Input: uid=101 pin=0000

		//~ i-123
		//~ o-entered user id 123 is invalid
		
		//~ i-101
		//~ i-1234
		//~ o-entered pin is invalid
		
		//~ i-101
		//~ i-0000
		//~ o-Welcome User : 101
		
#include<stdio.h>

int main()
{
	int uid,pin,ufx,pfx;
	printf("Enter userid to fix: ");
	scanf("%d",&ufx);
	printf("Enter pin to fix: ");
	scanf("%d",&pfx);
	printf("Enter uid: ");
	scanf("%d",&uid);
	if(uid==ufx)
	{
		printf("User id: %d\nEnter Pin:",uid);
		scanf("%d",&pin);
		if(pin==pfx)
		{
			printf("Welcome User: %d\nYou are successfully Loggged in",uid);
		}
		else
		{
			printf("Pin is invalid");
		}
	}
	else
	{
		printf("entered user id %d is invalid",uid);
	}
	return 0;
}
 

