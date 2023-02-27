#include "main.h"

/**
 * puts_half - A function that prints out the first half of a string
 * @str: input string to print.
 * Return: Always 0 (Success).
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
		j += 1;
	}
	else
	{
		j = i / 2;
	}
	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
