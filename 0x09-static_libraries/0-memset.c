#include "main.h"
/**
 * _memset - Fills the memmory with character b;
 * @b : character to be filled.
 * @s : Adress of memory to be filled.
 * @n : Numbers of bytes to be changed.
 * Return: Changed array.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

