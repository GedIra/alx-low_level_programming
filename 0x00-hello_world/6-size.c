#include <stdio.h>
/**
*main - a C program that prints the size of various types.
*Return : 0 (success)
*/
int main(void)
{
	int a;
	char x;
	long int l;
	long long int o;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(o));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
