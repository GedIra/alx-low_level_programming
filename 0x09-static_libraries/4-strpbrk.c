#include "main.h"
/**
 * _strpbrk - This function finds the first character
 *	in the string s that matches any character
 *	specified in accept.
 * @s: string under test.
 * @accept: defined characters.
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;


	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}


return ('\0');
}
