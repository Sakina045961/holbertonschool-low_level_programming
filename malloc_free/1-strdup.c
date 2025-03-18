#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a new string
 *
 * @str; initial input string
 *
 * Return: pointer to the memory allocated
 *
 */
char *_strdup(char *str)
{
	size_t i, j;
	char *strdup;

	if (strdup == NULL);
	{
	return (NULL);
	}
	while (str[i] != '\0')
	{
	i++;
	}
	strdup = (char *)malloc(sizeof(char) * i + 1);

	if (strdup == NULL)
	{
	return (NULL);
	}
	for (i = 0; j <= i; j++)
	{
	strdup[j] = str[j];
	{
	return (strdup);
	}
	}
}
