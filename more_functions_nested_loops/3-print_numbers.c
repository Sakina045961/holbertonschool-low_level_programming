#include "main.h"
/**
 * print_numbers - function for prints the numbers 0 to 9
 *
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
