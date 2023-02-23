#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * using the _putchar function
 * Return Always 0 (Success)
 */
void more_numbers(void)
{
	int i, j;

	i = j = 0;
	while (i < 10)
	{
		while (j <= 14)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
