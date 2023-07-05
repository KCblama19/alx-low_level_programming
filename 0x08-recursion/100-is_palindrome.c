#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return len;
}

/**
 * check_palindrome - Helper function to recursively check if a string is a palindrome.
 * @s: The string to check.
 * @entry: The starting index of the string.
 * @exit: The ending index of the string.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int check_palindrome(char *s, int entry, int exit)
{
	if (entry >= exit)
		return 1;
	if (s[entry] != s[exit])
		return 0;
	return check_palindrome(s, entry + 1, exit - 1);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);
	return check_palindrome(s, 0, len - 1);
}
