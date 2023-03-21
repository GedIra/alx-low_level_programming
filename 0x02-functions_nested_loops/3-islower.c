
#include "main.h"

/**
 * _islower - check if char(c) is lowercase
 * Return: 1 if char is lowercase, otherwise 0.
 * @c: inspected letter
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
