#include <stdio.h>

/**
 * _isupper - checks if the character is uppercase
 *@c: character must be checked
 *
 * Return: 1 if character is uppercase, 0 otherwise
 */
int _isupper(int c)

{

	if (c >= 'A' && c <= 'Z')
	{

		return (1);
	}

	else
	{

		return (0);
	}
}
