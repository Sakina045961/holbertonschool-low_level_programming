#include "main.h"

/**
 * _isalpha - C is alpha
 * @c: character
 * Return: 1for Success, 0for otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
