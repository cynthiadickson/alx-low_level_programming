#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings
 * @dest: The destination string
 * @src: the source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++);

	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
