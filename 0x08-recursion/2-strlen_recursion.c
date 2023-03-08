#include "main.h"

/**
  * _strlen_recursion - a function that returns the length if a string
  * @s: the string to print length of.
  * Return: the value of the integer.
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

