#ifndef HEADER_H
#define HEADER_H
#include <stdarg.h>
/**
 * struct format - a struct holds two characters
 * @c: type
 * @f: format
*/
typedef struct format
{
char c;
void (*f)(va_list args);
} format_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list);
void print_float(va_list);
void print_int(va_list);
void print_string(va_list);
#endif
