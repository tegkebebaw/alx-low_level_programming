#include "main.h"

/**
 * set_bit - sets the value of a bit at index to 1.
 * @n: sets of bits
 * @index: index to be replaced.
 *
 * Return: 1 if good, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
