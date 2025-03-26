// Angela Jovanovic
// Lab 11b

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcHypotenuse(double b, double h);

int main(void)
{
	double base, height, hypotenuse;

	printf("Enter a base for a right triangle: ");
	scanf("%lf", &base);

	printf("Enter a height for the right triangle: ");
	scanf("%lf", &height);

	hypotenuse = calcHypotenuse(base, height);

	printf("The hypotenuse is %lf \n", hypotenuse);
	
	return EXIT_SUCCESS;
}

double calcHypotenuse(double b, double h)
{
	double x, y;

	x = (b * b) + (h * h);
	
	y = sqrt(x);

	return y;
}
