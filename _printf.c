#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing characters and format specifiers
 *
 * Return: number of characters printed, or -1 if format is NULL
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i;
    int count;

    if (format == NULL)
        return -1;

    va_start(args, format);
    count = 0;
    i = 0;

    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '\0')
            {
                va_end(args);
                return -1;
            }
            if (format[i] == 'c')
                count += print_char(args);
            else if (format[i] == 's')
                count += print_string(args);
            else if (format[i] == '%')
                count += _putchar('%');
            else
            {
                count += _putchar('%');
                count += _putchar(format[i]);
            }
        }
        else
        {
            _putchar(format[i]);
            count++;
        }
        i++;
    }

    va_end(args);
    return count;
}
