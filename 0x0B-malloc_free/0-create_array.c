#include "main.h"
#include <stdlib>

/**
 * create_array - creates an array of chars,
 *		and initializes it with a specific char.
 * @size : size of array.
 * @c : Initialisation character.
 * Return: str on success, NULL if fails.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	if (size == 0 || str == NULL)
		return(NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}