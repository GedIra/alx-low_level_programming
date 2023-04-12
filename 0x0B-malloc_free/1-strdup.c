#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a new string
 *		which is a duplicate of the string str.
 * @str : a string to be duplicated.
 * Return: a duplicated string.
 */

char *_strdup(char *str)
{
	int i, r;
	char *dupl;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	dupl = malloc(sizeof(char) * (i + 1));

	if (dupl == NULL)
		return (NULL);

	for (r = 0; dupl[r] != '\0'; r++)
	{
		dupl[r] = str[r];
	}

	return (dupl);
}
