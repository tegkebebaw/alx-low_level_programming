#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int i = 0, b2;

	if (!b)
		return (0);

	number = 0;
  while(b[i] != '\0')
  {
  i++;
  }
	for (i--, b2 = 1; i >= 0; i--, b2 *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[number] & 1)
		{
			number += b2;
		}
	}

	return (number);
}
