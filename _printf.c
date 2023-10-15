#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	char *str;
	va_list arg;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			count++;
			_putchar(format[i]);
		}
		else 
		{
			count++;
			switch (format[++i])
			{
				case 'c':
					_putchar(va_arg(arg, int));
					break;
				case 's':
					str = va_arg(arg, char *);
					if (str == NULL)
						str = ("null");
					count += str_write(str);
					break;
				case '%':
					putchar('%');
					break;
				default:
					--i;
					_putchar(format[i]);
			}
		}
	}
	va_end(arg);
	return (count);
}
