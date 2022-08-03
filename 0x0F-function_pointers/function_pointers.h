
#ifndef function_pointer
#define function_pointer

/**
*File: function_pointer.h
*
*descriptio: Header file containing declarations for all function
*/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
