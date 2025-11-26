#include "main.h"

/**
 * print_string - prints a string
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;
	int i = 0;

	//ses deux ligne evite un plantage et affiche nul comme le vrai print
	if (s == NULL)
		s = "(null)";
	//cette ligne serre a parcourir la chaine de caractere usqua que on atteigne la fin
	while s[i] != '\0')
	{
		write(1, &s[i], 1);
		count++;
		i++;
	}

	return (count);
}
