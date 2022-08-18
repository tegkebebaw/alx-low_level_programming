#ifndef main_H
#define main_H
/**
*File: main.h
*
*descriptio: Header file containing declarations for all function
*/
unsigned int binary_to_uint(const char *b);void _print_rev_recursion(char *s);
int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
