#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string under test.
 * Return: length
 */
int _strlen(char *s)
{
	int lnth = 0;


	while (*s != '\0')
	{
		lnth++;
		s++;
	}


	return (lnth);
}
