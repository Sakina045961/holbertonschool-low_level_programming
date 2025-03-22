#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string, is a duplicate of the string
 * @str: a string to copy
 * Return: returns a pointer, NULL if the string is insufficient
 */
char *_strdup(char *str)

{
	char *ar;
	int i = 0;
	int j = 0;


	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ar = malloc(sizeof(char) *
	(i + 1));
	if (ar == NULL)
		return (NULL);
	while (str[j])
	{
		ar[j] = str[j];
		j++;
	}
	ar[j] = '\0';
	return (ar);
}
