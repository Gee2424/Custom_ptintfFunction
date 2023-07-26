/* main.h */
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);
int print_integer(va_list ap);
int print_binary(va_list ap);
int print_unsigned(va_list ap);
int print_octal(va_list ap);
int print_hex(va_list ap);
int print_HEX(va_list ap);
int print_pointer(va_list ap);
int print_reversed(va_list ap);
int print_rot13(va_list ap);
int print_S(va_list ap);

/* Add new function prototypes here */
int rot13(va_list ap);
int reverse_string(va_list ap);

#endif /* MAIN_H */
