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
    int i = 0;
    int count = 0;

    if (format == NULL)
	return(0)

    /* 2. Initialiser va_list */
    va_start(args, format);

    /* 3. Parcourir format */
    while (format[i] != '\0')
    {
        if(format[i] != '%')
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

		}
		else if (format[i] == 's')
		{ 
			char *s = va_arg(args, char  	*);
			write(1, &s, 1);
			count++;

		}
		else if(format[i] == '%')
		{

		}


        /* 6. Mettre à jour count */

        i++;
    }

    /* 7. Terminer va_list */
    va_end(args);

    /* 8. Retourner le nombre de caractères affichés */
    return (count);
}
