#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: point to a newly allocated space in memory
 *which contains the contents of s1
 *followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int s1_len = 0;
	int s2_len = 0;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s2[s2_len])
		s2_len++;
	result = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (result == NULL)
	return (NULL);
	while (i < s1_len)
	{
	result[i] = s1[i];
	i++;
	}
	while (i < s1_len + s2_len)
	{
	result[i] = s2[j];
	i++;
	j++;
	}
	result[i] = '\0';
	return (result);
}
