#include "main.h"
/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: Character to be located.
 *
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for(; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}

	return (0);
}
