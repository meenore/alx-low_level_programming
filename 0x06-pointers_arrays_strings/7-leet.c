#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @ch: parameter
 *
 * Return: character.
 */
char *leet(char *ch)
{
	char a[] = "AaEeOoTtLl";
	char b[] = "4433007711";
	int i, j;

	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; (a[j] != '\0' && b[j] != '\0'); j++)
		{
			if (ch[i] == a[j])
				ch[i] = b[j];
		}
	}
	return (ch);
	_putchar('\n');
}
