#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string.
 *
 * @dest: first variable
 * @src: second variable
 * @n: third variable
 *
 * Return: the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (j = i; j < n; j++)
		dest[j] = '\0';
	return (dest);
	_putchar('\n');
}
