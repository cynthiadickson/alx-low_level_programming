#include "main.h"

/**
 * print_triangle - a function that uses # to print triangle
 * @size: the size of the triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				if (i < j)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}

