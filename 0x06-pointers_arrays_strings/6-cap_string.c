#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @s: pointer to input string
 * Return: Returns pointer to capitalized string
 */
char *cap_string(char *s)
{
	int symb[14] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}
	for (j = 0; j < 14; j++)
		if (s[i] >= 97 && s[i] <= 122 && s[i - 1] == symb[j])
			s[i] = s[i] - 32;
	}
	return (s);
}


