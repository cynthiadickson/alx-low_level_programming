#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - a function taht prints the chessboard
 * @a: the board to print
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = j = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}

}
