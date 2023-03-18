#include <stdio.h>
/**
*main - a C program that prints the size of various types on
*the computer it is compiled and run on.
*Return: 0 (success)
*/
int main(void)
{
char x;
int n;
long int l;
long long int g;
float f;
printf("Size of a char: %d byte(s)", (unsigned long)sizeof(x));
printf("size of an int: %d byte(s)", (unsigned long)sizeof(n));
printf("Size of a long int: %d  byte(s)", (unsigned long)sizeof(l));
printf("Size of a long long int: %d byte(s)", (unsigned long)sizeof(g));
printf("size of a float: %d byte(s)", (unsigned long)sizeof(f));
return (0);
}
