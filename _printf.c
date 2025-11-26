#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			i++;
			
			if (format[i] == 'c')
				count += print_char(args);

			else if (format[i] == 's')
				count += print_string(args);

			else if (format[i] == '%')
			{
				write(1, "%", 1);
				count++;
			}
			else
			{
				return (-1);
			}
		}

		i++;
	}

	va_end(args);
	return (count);
}
