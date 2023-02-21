#include "main.h"

/**
 * print_alphabet_x10 - Check Description
 * Description: prints alphabet in lowercase 10 times
 * using the _putchar function.
 *Return Always o (Success)
 */
void print_alphabet_x10(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
