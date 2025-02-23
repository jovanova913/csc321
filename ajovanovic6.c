// Angela Jovanovic
// Lab #6b

#include <stdio.h>

int main(void)
{
	int x = 9;
	int y = 5;
	int intAns;
	double a  = 9.00;
	double b = 5.00;
	double doubleAns;

	printf("For integers x=9 and y=5:\n");
	intAns = x+y*x/y-x;
	printf("x+y*x/y-x = %d \n", intAns);
	intAns = -x-y/x*y+x;
	printf("-x-y/x*y+x = %d \n", intAns);
	intAns = x+y-x/y;
	printf("x+y-x/y = %d \n", intAns);

	printf("For doubles a=9.00 and b=5.00:\n");
	doubleAns = a+b*a/b-a;
	printf("a+b*a/b-a = %lf \n", doubleAns);
	doubleAns = -a-b/a*b+a;
	printf("-a-b/a*b+a = %lf \n", doubleAns);
	doubleAns = a+b-a/b;
	printf("a+b-a/b = %lf \n", doubleAns);

	return 0;
}
