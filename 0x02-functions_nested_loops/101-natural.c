#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of
 * 3 and 5 below 1024.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, z = 0;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			z += i;
	printf("%d\n", z);
	return (0);
}
