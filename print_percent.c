#include "holberton.h"

/**
 * print_percent - print a percent sign
 * @ap: argument pointer
 * Return: number of characters printed
 */
int print_percent(va_list ap)
{
    (void)ap; // this is to avoid an unused variable warning
    char c = '%';
    return write(1, &c, 1);
}
