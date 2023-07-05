#include "main.h"

/**
 * wildcmp - Compares two strings considering the special character *.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if the strings are considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) != '\0' && *s1 == '\0')
			return (0);

		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
			return (1);
	}
	else if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
