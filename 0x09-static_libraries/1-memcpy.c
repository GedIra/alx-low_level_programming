#include "main.h"
/**
 *_memcpy - a function that copies memor.
 *@dest: destination of a copied memory.
 *@src: source of memory to be copied.
 *@n: number of bytes to be copied.
 *Return: copied memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}