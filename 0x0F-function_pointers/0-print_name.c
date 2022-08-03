#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function which points to another function whch prints the string passed
 *@name: string to be printed
 *@f pointer to function which print name
 * Return: return nothing.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
