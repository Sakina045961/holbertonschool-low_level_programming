#include "main.h"

/**
 * print_square - Prints n squares according n number of times
 * @size: The number of squares/number of times
 * Return: empty
 */

void print_square(int size)

{
	int a, b;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (a = 0; b < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
	}
}
