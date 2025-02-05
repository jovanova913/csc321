// Angela Jovanovic
// Lab #4b

import java.util.Scanner;

public class ajovanovic4
{
	public static void main(String[] args)
	{
		int x = 0;

		System.out.println("Choose an option:");
		System.out.println("1. Warframe");
		System.out.println("2. Marvel Rivals");
		System.out.println("3. Mass Effect");
		System.out.println("4. Bugsnax");

		Scanner input = new Scanner(System.in);
		x = input.nextInt();

		if(x == 1)
		{
			System.out.println("Welcome to  the Origin System, tenno.");
		}
		else if(x == 2)
		{
			System.out.println("Oh no, you're gonna be hearing ultimate voicelines in your sleep.");
		}
		else if(x == 3)
		{
			System.out.println("I'm Commander Shepard, and this is my favorite game on the Citadel.");
		}
		else if(x == 4)
		{
			System.out.println("Bugsnax! Bugsnax! Bugsnax!");
		}
		else
		{
			System.out.println("Invalid option!");
			System.out.println("You get nothing. Goodbye.");
		}
	}
}
