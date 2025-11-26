#include <stdarg.h>
#include "main.h"

/**
 * print_string - prints a string
 * @args: list of arguments containing the string to print
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
    char *s;
    int i;
    s = va_arg(args, char *);

	if (s == NULL)
        s = "(null)";

	i = 0;
    while (s[i] != '\0')
    {
        _putchar(s[i]);
        i++;
    }
	return i;
}
