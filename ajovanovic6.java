// Angela Jovanovic
// Lab #6b

public class ajovanovic6
{
	public static void main(String[] args)
	{
		int x = 9;
		int y = 5;
		int intAns;
		double a = 9.00;
		double b = 5.00;
		double doubleAns;

		System.out.println("For integers x=9 and y=5:");
		intAns = x+y*x/y-x;
		System.out.println("x+y*x/y-x = " + intAns);
		intAns = -x-y/x*y+x;
		System.out.println("-x-y/x*y+x = " + intAns);
		intAns = x+y-x/y;
		System.out.println("x+y-x/y = " + intAns);

		System.out.println("For doubles a=9.00 and b=5.00:");
		doubleAns = a+b*a/b-a;
		System.out.println("a+b*a/b-a = " + doubleAns);
                doubleAns = -a-b/a*b+a;
                System.out.println("-a-b/a*b+a = " + doubleAns);
                doubleAns = a+b-a/b;
                System.out.println("a+b-a/b = " + doubleAns);
	}
}
