#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the bytes to search for.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int locate;

	while (*s != '\0')
	{
		locate = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				locate = 1;
				break;
			}
			accept++;
		}
		if (locate == 0)
			break;
		s++;
		accept -= count;
	}

	return (count);
}
