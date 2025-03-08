#include "main.h"
/**
 * print_diagonal - function
 * @n: times
 *
 * Return: 1 if upper, or 0
 */
void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	while (b < n)
	{
	a = 0;
	while (a <= b)
	{
	if (a != 0)
	{
	_putchar(' ');
	}
	a++;
	}
	_putchar(98);
	_putchar('\n');
	b++;
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
