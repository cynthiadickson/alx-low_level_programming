#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100.
 * prints Fizz for multiples of 3
 * prints Buzz for multiples of 5
 * prints FizzBuzz for multiples of 3 and 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
