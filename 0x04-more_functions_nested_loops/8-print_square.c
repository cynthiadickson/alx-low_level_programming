#include "main.h"

/**
 * print_square - a function that uses the character # to print squares.
 * @size: the number of # to print in each line
 * Return: Always 0 (Success).
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
