// Angela Jovanovic
// Lab 9c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));

	int num = rand() % 21;
	int i, guess;

	while(guess < 0 || guess > 20)
	{
		printf("Enter a number between 0 and 20: ");
		scanf("%d", &guess);
		if(guess < 0 || guess > 20)
		{
			puts("You entered a number out of range!");
		}
	}
	
	if(guess == num)
	{
		for(i = 0; i < guess; i++)
		{
			printf("You won! You guessed the correct number!\n");
		}
	}
	else if(guess < num)
	{
		printf("You lost...Your guess was lower than my number %d.\n", num);
	}
	else
	{
		printf("You lost...Your guess was higher than my number %d.\n", num);
	}

	return EXIT_SUCCESS;
}
