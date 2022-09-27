#include <unistd.h>

/**
 *_putchar -print char to standard output.
 *@c: character to print.
 *
 * Return: On Sucess 1
 *On error, -1 is returned and error is set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

