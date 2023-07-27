#include "holberton.h"

/**
 * print_char - print a character
 * @ap: argument pointer
 * Return: number of characters printed
 */
int print_char(va_list ap)
{
    char c = va_arg(ap, int);

    return write(1, &c, 1);
}
