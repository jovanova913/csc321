// Angela Jovanovic
// Midterm

import java.util.Scanner;

public class ajovanovicmidterm
{
	public static void main(String[] args)
	{
		int num = 4;
		int guess = 0;

		System.out.println("Enter a number between 0 and 9:");
		Scanner input = new Scanner(System.in);
		guess = input.nextInt();

		if(guess == num)
		{
			System.out.println("You win! You guessed correctly!");
			System.out.println("Your prize is the pride of knowing you guessed correctly!");
		}
		else if(guess > num)
		{
			System.out.println("You lose...You guessed too high.");
		}
		else
		{
			System.out.println("You lose...You guessed too low.");
		}
	}
}

