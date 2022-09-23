#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @ch: parameter
 *
 * Return: character.
 */
char *rot13(char *ch)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; (a[j] != '\0' && b[j] != '\0'); j++)
		{
			if (a[j] == ch[i])
			{
				ch[i] = b[j];
				break;
			}
		}
	}
	return (ch);
	_putchar('\n');
}
