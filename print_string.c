#include "holberton.h"

/**
 * print_string - print a string
 * @ap: argument pointer
 * Return: number of characters printed
 */
int print_string(va_list ap)
{
    char *s = va_arg(ap, char *);
    int i = 0;

    if (!s)
        s = "(null)";

    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }

    return i;
}
