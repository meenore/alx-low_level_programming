#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: first variable
 * @src: second variable
 * @n: third variable
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

	j = 0;
	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
	_putchar('\n');
}
