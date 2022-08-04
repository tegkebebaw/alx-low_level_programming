#include <stdarg.h>
#ifndef variadic_functions
#define variadic_functions
/**
*File: variadic_functions.h
*
*description: Header file containing declarations for all function
*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif
