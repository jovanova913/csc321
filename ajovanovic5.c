// Angela Jovanovic
// CSC-321
// Lab #5a

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int x = 4;
	char y = 'z';
	double z = 7.31;
	float w = 1.2;

	printf("Int x's value is %d and its address is %p \n", x, &x);
	printf("Char y's value is %c and its address is %p \n", y, &y);
	printf("Double z's value is %lf and its address is %p \n", z, &z);
	printf("Float w's value is %f and its address is %p \n", w, &w);

	if(x == 4)
	{
		int q = 0;
	}

	//q++;

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;

	for(i = 0; i < 10; i++)
	{
		printf("arr[%d]'s address is %p \n", i, &arr[i]);
	}

	return EXIT_SUCCESS;
}
