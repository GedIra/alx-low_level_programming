#include "main.h"
/**
 * _memset - a function which fills a memory by one character.
 * @s : an array to be filled.
 * @b : character to be filled.
 * @n : bytes to be filled.
 *
 * Return: the changed s array.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
