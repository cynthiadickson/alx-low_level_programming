#include "main.h"

/**
  * sqrt_checker - checks for the square root of input number
  * @j: input number that is squared
  * @base: base number to check
  * Return: natural square root of base
  */
int sqrt_checker(int j, int base)
{
	if (j * j == base)
		return (j);
	if (j * j > base)
		return (-1);
	return (sqrt_checker(j + 1, base));
}
/**
  * _sqrt_recursion - return natural square root of number n.
  * @n: integer to check square root
  * Return: natural square root of number n
  */
int _sqrt_recursion(int n)
{
	return (sqrt_checker(1, n));
}
