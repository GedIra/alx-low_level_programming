#include "main.h"
/**
 * _strchr - searches for the first occurrence of the character c.
 * @s: a string under test.
 * @c:character to be searched.
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
