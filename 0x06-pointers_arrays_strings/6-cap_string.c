#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @ch: parameter
 *
 * Return: character.
 */
char *cap_string(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[0] >= 'a' && ch[0] <= 'z')
			ch[0] -= 32;
		else if (ch[i] >= 9 && ch[i] <= 11)
		{
			if (ch[i + 1] >= 97 && ch[i + 1] <= 122)
				ch[i + 1] -= 32;
		}
		else if (ch[i] >= 32 && ch[i] <= 47)
		{
			if ((ch[i + 1] >= 'a' && ch[i + 1] <= 'z') && ch[i] != 45)
			ch[i + 1] -= 32;
		}
		else if (ch[i] >= 58 && ch[i] <= 63)
		{
			if (ch[i + 1] >= 97 && ch[i + 1] <= 122)
				ch[i + 1] -= 32;
		}
		else if (ch[i] >= 123 && ch[i] <= 125)
		{
			if (ch[i + 1] >= 'a' && ch[i + 1] <= 'z')
				ch[i + 1] -= 32;
		}
	}
	return (ch);
	_putchar('\n');
}
