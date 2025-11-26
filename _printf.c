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
        return (0);

    va_start(args, format);

    while (format[i] != '\0')
    {
        if (format[i] != '%')
        {
            write(1, &format[i], 1);
            count++;
            i++;
            continue;
        }
		
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
            if (s == NULL)
                s = "(null)";
            for (int j = 0; s[j] != '\0'; j++)
            {
                write(1, &s[j], 1);
                count++;
            }
        }
        else if (format[i] == '%')
        {
            write(1, "%", 1);
            count++;
        }
        else
        {
            write(1, &format[i], 1);
            count++;
        }

        i++;
    }

    va_end(args);

    return (count);
}

