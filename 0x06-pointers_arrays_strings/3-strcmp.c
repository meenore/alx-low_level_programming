#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first variable
 * @s2: second variable
 *
 * Return: the resulting string dest
 */
int _strcmp(char *s1, char *s2)
{
	int i, js;

	for (i = 0; (s1[i] != '\0' || s2[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])
		{
			js = s1[i] - s2[i];
			break;
		}
		else if (s1[i] == s2[i])
		{
			js = 0;
		}
	}
	return (js);
	_putchar('\n');
}
