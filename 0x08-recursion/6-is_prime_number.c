#include "main.h"

/**
 * check_prime - Checks to see if number(s) is prime
 * @j: factor check
 * @k: Possible prime number
 *
 * Return: 1 if prime, 0 if not prime.
 */

int check_prime(int j, int k)
{
	if (k < 2 || k % j == 0)
		return (0);
	else if (j > k / 2)
		return (1);
	else
		return (check_prime(j + 1, k));
}

/**
 * is_prime_number - States if number is prime or not.
 * @n: Number to check
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
