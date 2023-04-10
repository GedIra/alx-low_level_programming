#include "main.h"
/**
 * _strstr - returns pointer to the first occurrence
 *		of the matched string.
 * @haystack: string under test.
 * @needle: a string with defined characters.
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;


		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}


		if (*p == '\0')
			return (haystack);
	}


	return (0);
}
