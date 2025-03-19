// Angela Jovanovic
// Lab 10c

import java.util.Scanner;

public class ajovanovic10
{
	public static void main(String[] args)
	{
		double radius = 0;
		double height = 0;
		double volume = 0;

		Scanner input = new Scanner(System.in);

		System.out.println("Enter a radius for a cylinder: ");
		radius = input.nextDouble();
		System.out.println("Enter a height for the cylinder: ");
		height = input.nextDouble();

		volume = cylinderVolume(radius, height);

		System.out.println("The volume of your cylinder is " + volume + ".");
	}

	static double cylinderVolume(double radius, double height)
	{
		double pi = Math.PI;
		double volume = 0;

		volume = pi * radius * radius * height;

		return volume;
	}
}

