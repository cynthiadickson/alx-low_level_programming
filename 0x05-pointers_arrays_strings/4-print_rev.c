#include "main.h"

/**
 * print_rev - a function that prints a string in reverse.
 * @s: input string
 * Return: Always 0 (Success).
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	while (s[c] != '\0')
	{
		_putchar(s[c--]);
	}
	_putchar('\n');
}
