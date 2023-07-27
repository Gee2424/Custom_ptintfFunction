#include "holberton.h"

/**
 * print_octal - print a number in octal (base 8)
 * @ap: argument pointer
 * Return: number of characters printed
 */
int print_octal(va_list ap)
{
    unsigned int num = va_arg(ap, unsigned int);
    char buffer[12]; // sufficient for an octal representation of an unsigned int
    int i = 0;

    if (num == 0)
    {
        write(1, "0", 1);
        return 1;
    }

    while (num != 0)
    {
        unsigned int remainder = num % 8;
        buffer[i++] = '0' + remainder;
        num = num / 8;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        write(1, &buffer[j], 1);
    }

    return i;
}
