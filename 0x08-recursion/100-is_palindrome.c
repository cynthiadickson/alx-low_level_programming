#include "main.h"
#include <stdio.h>

/**
  * _strlen_recursion - returns the length of a string
  * @s: the string to get the length of
  * Return: length of the string
  */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
/**
  * check_palindrome - checks the string
  * @str: the string
  * @len: length of the string
  * @i: the incrementor, starts at 0
  * Return: 1 if it's a palindrome, 0 of it's not
  */
int check_palindrome(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (check_palindrome(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}
/**
  * is_palindrome - checks to see if a string is a palindrome
  * @s: the string to check
  * Return: 1 if it's a palindrome, o if it is not.
  */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (check_palindrome(s, length, i));
}

