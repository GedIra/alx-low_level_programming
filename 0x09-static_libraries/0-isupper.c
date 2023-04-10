#include "main.h"

/**
 *  _isupper - Checks if c is an upppercase character.
 *  @c: character under test.
 *  Return: 1 or 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
