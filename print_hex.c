#include "holberton.h"

/**
 * print_hex - print a number in hexadecimal (base 16)
 * @ap: argument pointer
 * Return: number of characters printed
 */
int print_hex(va_list ap)
{
    unsigned int num = va_arg(ap, unsigned int);
    char buffer[9]; // sufficient for a hex representation of an unsigned int
    int i = 0;

    if (num == 0)
    {
        write(1, "0", 1);
        return 1;
    }

    while (num != 0)
    {
        unsigned int remainder = num % 16;
        if (remainder < 10)
            buffer[i++] = '0' + remainder;
        else
            buffer[i++] = 'a' + (remainder - 10); // for hexadecimal a-f
        num = num / 16;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        write(1, &buffer[j], 1);
    }

    return i;
}
