#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string, and which will be adjusted.
 * @s2: second string, to be concatenated to s1.
 * @n: number of bytes of s2 to be concatenated.
 * Return: a pointer to a concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, ln1 = 0, ln2 = 0;
	char *ptr;

	while (s1[ln1])
		ln1++;

	while (s2[ln2])
		ln2++;

	if (n < ln2)
		ptr = malloc(sizeof(char) * (ln1 + n + 1));

	if (n >= ln2)
		ptr = malloc(sizeof(char) * (ln1 + ln2 + 1));

	if (!ptr)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; n < ln2 && i < (ln1 + n); j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	for (j = 0; n >= ln2 && i < (ln1 + ln2); j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}
