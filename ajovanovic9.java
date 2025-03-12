// Angela Jovanovic
// Lab 9c

import java.util.Scanner;
import java.util.Random;

public class ajovanovic9
{
	public static void main(String[] args)
	{
		Random rand = new Random();

		int i;
		int guess = -1;
		int num = rand.nextInt(21);
		Scanner input = new Scanner(System.in);

		while(guess < 0 || guess > 20)
		{
			System.out.println("Enter a number between 0 and 20: ");
			guess = input.nextInt();

			if(guess < 0 || guess > 20)
			{
				System.out.println("You entered a number out of range!");
			}
		}

		if(guess == num)
		{
			for(i = 0; i < guess; i++)
			{
				System.out.println("You win! You guessed the correct number!");
			}
		}
		else if(guess < num)
		{
			System.out.println("You lose...Your guess was lower than my number " + num + ".");
		}
		else{
			System.out.println("You lose...Your guess was higher than my number " + num + ".");
		}
	}
}
