#include <stdio.h>

/**
 * _isdigit - checks if a character is a digit (0 through 9)
 * @c: character must be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
