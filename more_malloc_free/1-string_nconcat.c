#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int b = 0;
	unsigned int a = 0;
	unsigned int k;
	unsigned int i;
	unsigned int c = 0;
	unsigned int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[b])
		b++;
	while (s2[a])
		a++;
	if (a > n)
		a = n;

	len = b + a;

	ar = malloc(sizeof(char) * (len + 1));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < b; i++)
		ar[c++] = s1[i];
	for (k = 0; k < a; k++)
		ar[c++] = s2[k];

	ar[c] = '\0';
	return (ar);
}
