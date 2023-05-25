#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct ty - Struct ty
 *
 * @t: The parameter type
 * @f: The function associated
 */
typedef struct ty
{
        char *t;
        void (*f)(char *, va_list);
} f_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /*VARIADIC_FUNCTIONS_H*/
