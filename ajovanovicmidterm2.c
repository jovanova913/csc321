// Angela Jovanovic
// Midterm 2

#include<stdio.h>
#include<stdlib.h>

void printName(int count);

int main(void)
{
	int num = 0;

	printf("Enter the number of times my name should print: ");
	scanf("%d", &num);

	printName(num);

	return EXIT_SUCCESS;
}

void printName(int count)
{
	int i;

	for(i = 0; i < count; i++)
	{
		printf("Angela Jovanovic\n");
	}
}
