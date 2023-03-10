#include "main.h"
#include <stdio.h>

/**
  * main - Prints the number of arguments in a program.
  * @argc: number of arguments
  * @argv: array of arguments
  *
  * Return: Always 0 (Success).
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
