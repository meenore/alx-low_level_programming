#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: parameter
 *
 * Return: void.
 */

void print_number(int n)
{
	int i, j;

	i = 1000000000;
	j = 1;
	if (n > 0)
	{
		n = n * -1;
		j = j * -1;
	}
	if (n != 0)
	{
		while (n / i == 0)
			i /= 10;
		if (j == 1)
			_putchar('-');
		while (i >= 1)
		{
			_putchar(-(n / i) + '0');
			n = n % i;
			i /= 10;
		}
	}
	else
		_putchar('0');
}
