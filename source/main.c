#include <stdio.h>
#include <ctype.h>

int main ()
{
	int firstnumber;
	int secondnumber;
	int result;
	int maxint = 32000;
	char c;

	printf ("Hello! Snap user.\n");
	printf ("This snap will add 2 numbers for you.\n");

	printf ("Enter the first number: ");
	while ( 1 != scanf ("%d",	&firstnumber ) )
	{
		printf("Please insert a valid integer value\n");
		printf ("Enter the first number: ");

		//clear stdin buffer
		do 
		{
			c = getchar();
		}
		while (!isdigit(c));
		ungetc(c, stdin);		
 	}

	printf ("\nEnter the second number: ");
	while ( 1 != scanf ("%d",  &secondnumber ) )
	{
		printf("Please insert a valid integer value\n");
		printf ("Enter the second number: ");

		//clear stdin buffer
		do 
		{
			c = getchar();
		}
		while (!isdigit(c));
		ungetc(c, stdin);		
 	}

	if ( secondnumber > ( maxint - firstnumber ) )
	{
		printf ("\nUps! It seems that ( first number + second number ) > %d\n", maxint );
		printf (" %d is the maximum value supported by this programm\n", maxint );
	}
	else
	{
		printf ("\n first number + second number = %d\n", 	( firstnumber + secondnumber ) );
	}
} 



