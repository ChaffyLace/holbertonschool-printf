#include <stdarg.h>
#include "main.h"

/**
 * print_char - prints a single character
 * @args: list of arguments containing the character to print
 *
 * Return: number of characters printed (always 1)
 */
int print_char(va_list args)
{
    char c = (char)va_arg(args, int);
    _putchar(c);
    return 1;
}

