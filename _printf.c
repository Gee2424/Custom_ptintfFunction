#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - a simplified printf function
 * @format: string format
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    int i = 0;
    int count = 0;
    va_list args;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
                count += print_char(va_arg(args, int));
            else if (format[i] == 's')
                count += print_string(va_arg(args, char *));
        }
        else
        {
            write(1, &format[i], 1);
            count++;
        }
        i++;
    }

    va_end(args);

    return count;
}
