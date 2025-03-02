#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar\n";

	int d = 0;

	while (c[d] != '\0')
	{
		_putchar(c[d]);
		d++;
	}
	return (0);
}
