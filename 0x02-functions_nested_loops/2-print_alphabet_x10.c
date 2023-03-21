#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i;
	char le;

	i = 0;

	while (i < 10)
	{
		le = 'a';
		while (le  <= 'z')
		{
			_putchar(le);
				le++;
		}
		_putchar('\n');
			i++;
	}
}
