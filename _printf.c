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

<<<<<<< HEAD
    if (format == NULL)
        return (0);

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
            {
                char c = va_arg(args, int);
                write(1, &c, 1);
                count++;
            }
            else if (format[i] == 's')
            {
                char *s = va_arg(args, char *);
                int j = 0;

                if (s == NULL)
                    s = "(null)";

                while (s[j] != '\0')
                {
                    write(1, &s[j], 1);
                    j++;
                    count++;
                }
            }
            else if (format[i] == '%')
            {
                write(1, "%", 1);
                count++;
            }
        }

        i++;
    }

    va_end(args);
    return (count);
=======
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
>>>>>>> 0dbe37bf8f03d54452b7962ad362c9fc3cff049b
}

