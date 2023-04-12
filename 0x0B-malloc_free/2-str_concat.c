#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 * @s1 : first string.
 * @s2 : second string.
 * Return: cnted( concatenated string).
 */

char *str_concat(char *s1, char *s2)
{
	char *cnted;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	cnted = malloc(sizeof(char) * (i + j + 1));

	if (cnted == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		cnted[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		cnted[i] = s2[j];
		i++;
	}
	cnted[i] = '\0';

	return (cnted);
}
