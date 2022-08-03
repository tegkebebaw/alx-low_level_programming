#include "3-calc.h"
/**
 * op_add - adds two numbers.
 * @a: first parameter.
 * @b: second parameter.
 *
 * Return: sum.
 */
int op_add(int a, int b)
{
  return a + b;
}
/**
 * op_sub - subtract two numbers.
 * @a: first parameter.
 * @b: second parameter.
 *
 * Return: difference.
 */
int op_sub(int a, int b)
{
  return a - b;
}
/**
 * op_mul - multiply two numbers.
 * @a: first parameter.
 * @b: second parameter.
 *
 * Return: product.
 */
int op_mul(int a, int b)
{
  return a * b;
}
/**
 * op_div - adds two numbers.
 * @a: first parameter.
 * @b: second parameter.
 *
 * Return: devion.
 */
int op_div(int a, int b)
{
  if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
  return a / b;
}
/**
 * op_mod - find mode of two numbers.
 * @a: first parameter.
 * @b: second parameter.
 *
 * Return: mod.
 */
int op_mod(int a, int b)
{
  if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
  return a % b;
}
