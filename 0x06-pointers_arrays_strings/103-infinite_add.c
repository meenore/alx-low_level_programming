#include "main.h"

/**
* infinite_add - adds two numbers.
*
* @n1: first parmeter
* @n2: second parameter
* @r: third parameter
* @size_r: fourth parameter
*
* Return: pointer to the result.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i1, i2, tempi, ji, i, j, k1, k2, m;
    char temp[10000];

    ji = i = i1 = i2 = j = k1 = k2 = m = 0;
    while (n1[i1] != '\0')
        i1++;
	while (n2[i2] != '\0')
        i2++;
	if (i1 + 2 > size_r || i2 + 2 > size_r)
		return (0);
	i1--;
	i2--;
	while (i <= i1 || i <= i2)
	{
		k1 = k2 = 0;
		if (i <= i1)
			k1 = n1[i1 - i] - '0';
		if (i <= i2 && (i2 - i) >= 0)
			k2 = n2[i2 - i] - '0';
		j = k1 + k2 + m;
		if (j >= 10)
		{
			m = 1;
			j -= 10;
		}
		else
			m = 0;
		r[i] = j + '0';
		i++;
		ji++;
	}
	if (m > 0)
	{
		r[i] = m + '0';
		r[i + 1] = '\0';
	}
	i = tempi = 0;
	while (i <= ji)
	{
		temp[i] = r[ji - i];
		tempi++;
		i++;
	}
	i = 0;
	while (i < tempi)
	{
		if (r[i] == '\0')
		{
			break;
		}
		r[i] = temp[i];
		i++;
	}
	return (r);
}
