#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int a, b;

	/* Ask user to input two numbers */
	printf("Write 2 numbers for multiplication\n");

	/* Read the two numbers from user input */
	scanf("%d %d", &a, &b);

	/* Display the result of the multiplication */
	printf("Multiplication of %d and %d is %d\n", a, b, (a * b));

	return (0);
}
