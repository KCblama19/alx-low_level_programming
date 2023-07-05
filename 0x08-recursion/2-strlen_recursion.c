#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string for which to find the length.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
