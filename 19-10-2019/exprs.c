//~ f(x,y)  = 2x^3+4y^2-56
//~ (5,10)  = 594
//~ Input: 5 10
//~ Output:
	//~ x value is: 5 and y value is: 10 
	//~ expression value is: 594



#include<stdio.h>

int main() 
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("x value is: %d and y value is: %d\nExpression value is: %d",x,y,(2*(x*x*x)+4*(y*y)-56));
	return 21;
}
