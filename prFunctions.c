#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <limits.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print*
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * str_write - prints a string to the stdout using _putchar
 * @string: pointer to the string to be printed
 *
 * Return: the number of characters printed
 */

int str_write(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	--i;
	return (i);
}
