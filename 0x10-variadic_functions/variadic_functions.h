#ifndef VARIAD_H
#define VARIAD_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const format, ...);
#endif
