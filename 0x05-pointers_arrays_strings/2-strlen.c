#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: an input string
 * Return:length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
