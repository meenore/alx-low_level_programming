#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 *
 * @b: first parameter
 * @size: second parameter
 *
 * Return: void.
 */

void print_buffer(char *b, int size)
{
	int c, g, h, i;

	g = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (g < size)
	{
		h = size - g < 10 ? size - g : 10;
		printf("%08x: ", g);
		for (i = 0; i < 10; i++)
		{
			if (i < h)
				printf("%02x", *(b + g + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < h; i++)
		{
			c = *(b + g + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		g += 10;
	}
}
