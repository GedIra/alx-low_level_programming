/**
 * _strncat - a function that concatenates two strings.
 * @dest : first input, and destination.
 * @src : second input , and source.
 * @n : input value limitation.
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
			j++;
			i++;
	}
	dest[i] = '\0';
	return (dest);
}
