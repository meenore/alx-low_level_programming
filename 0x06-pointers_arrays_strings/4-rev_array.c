#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: first parameter
 * @n: second parameter
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, j, k, l;

	l = n / 2;
	j = n - 1;
	for (i = 0; i <= l; i++)
	{
		if (i < l)
		{
			k = a[i];
			a[i] = a[j];
			a[j] = k;
		}
		else if (i == l)
			a[i] = a[i];
		j--;
	}
}
