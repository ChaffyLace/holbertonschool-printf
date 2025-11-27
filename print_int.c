#include "main.h"

/**
 * print_int - imprime un entier
 * @n: nombre à imprimer
 *
 * Return: nombre de caractères imprimés
 */
int print_int(int n)
{
    int count = 0;
    long num = n;

    if (num < 0)
    {
        _putchar('-');
        count++;
        num = -num;
    }

    if (num / 10)
        count += print_int(num / 10);

    _putchar((num % 10) + '0');
    count++;

    return (count);
}
