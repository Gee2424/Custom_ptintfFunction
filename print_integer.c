#include "holberton.h"

/**
 * print_integer - print an integer
 * @ap: argument pointer
 * Return: number of characters printed
 */
int print_integer(va_list ap)
{
    int num = va_arg(ap, int);
    char buffer[12]; // sufficient for an integer
    int i = 0;

    if (num == 0)
    {
        write(1, "0", 1);
        return 1;
    }

    if (num < 0)
    {
        write(1, "-", 1);
        num = -num;
    }

    while (num != 0)
    {
        int remainder = num % 10;
        buffer[i++] = '0' + remainder;
        num = num / 10;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        write(1, &buffer[j], 1);
    }

    return i;
}
