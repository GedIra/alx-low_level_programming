#include <stdio.h>
/**
*Main - a C program that prints the size of various types on the computer it is compiled and run on.
*Return: 0 (success)
*/
int main(void)
{
	char x;
	int n;
	long int l;
	long long int g;
	float f;

printf("Size of a char: %zu byte(s)\n", sizeof(x));
printf("size of an int: %zu byte(s)\n", sizeof(n));
printf("Size of a long int: %zu byte(s)\n", sizeof(l));
printf("Size of a long long int: %zu byte(s)\n", sizeof(g));
printf("size of a float: %zu byte(s)\n", sizeof(f));
return (0);
}
