#include<stdio.h>
#include<stdarg.h>
#include<string.h>
#include"variadic_functions.h"
#include<stdlib.h>
/**
 * print_char - print a char
 * @args: list of arguments pointing to a char
*/
void print_char(va_list args)
{
char c;
c = va_arg(args, int);
printf("%c", c);
}
/**
 * print_int - print an integer
 * @args: list of arguments pointing to a int
*/
void print_int(va_list args)
{
int x;
x = va_arg(args, int);
printf("%d", x);
}
/**
 * print_string - print a string
 * @args: list of arguments pointing to a string
*/
void print_string(va_list args)
{
char *st;
st = va_arg(args, char *);
if (st == NULL)
{
printf("(nil)");
return;
}
printf("%s", st);
}
/**
 * print_float - print a float
 * @args: list of arguments pointing to float
*/
void print_float(va_list args)
{
float f;
f = va_arg(args, double);
printf("%f", f);
}
/**
 * print_all - print any given  format
 * @format: the specific format
*/
void print_all(const char * const format, ...)
{
char *ch = "";
size_t i = 0, j;
va_list args;
format_t form[] = {
{'i', print_int},
{'f', print_float},
{'c', print_char},
{'s', print_string},
{0, NULL}
};
va_start(args, format);
while (format && *(format + i))
{
j = 0;
while ((form + j)->c != *(format + i) && j < 4)
j++;
if (j < 4)
{
printf("%s", ch);
(form + j)->f(args);
ch = ", ";
}
i++;
}
printf("\n");
va_end(args);
}
