#include "holberton.h"

/**
 * print_unsigned - print an unsigned integer
 * @ap: argument pointer
 * Return: number of characters printed
 */
int print_unsigned(va_list ap)
{
    unsigned int num = va_arg(ap, unsigned int);
    char buffer[12]; // sufficient for an unsigned integer
    int i = 0;

    if (num == 0)
    {
        write(1, "0", 1);
        return 1;
    }

    while (num != 0)
    {
        unsigned int remainder = num % 10;
        buffer[i++] = '0' + remainder;
        num = num / 10;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        write(1, &buffer[j], 1);
    }

    return i;
}
