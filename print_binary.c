#include "holberton.h"

/**
 * print_binary - print a binary number
 * @ap: argument pointer
 * Return: number of characters printed
 */
int print_binary(va_list ap)
{
    unsigned int num = va_arg(ap, unsigned int);
    char buffer[33]; // sufficient for a binary representation of an unsigned int
    int i = 0;

    if (num == 0)
    {
        write(1, "0", 1);
        return 1;
    }

    while (num != 0)
    {
        int remainder = num % 2;
        buffer[i++] = '0' + remainder;
        num = num / 2;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        write(1, &buffer[j], 1);
    }

    return i;
}
