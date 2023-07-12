#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: concatenated string, NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int num1, num2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	num1 = num2 = 0;
	while (s1[num1] != '\0')
		num1++;
	while (s2[num2] != '\0')
		num2++;

	concat = malloc(sizeof(char) * (num1 + num2 + 1));

	if (concat == NULL)
		return (NULL);

	num1 = num2 = 0;
	while (s1[num1] != '\0')
	{
		concat[num1] = s1[num1];
		num1++;
	}

	while (s2[num2] != '\0')
	{
		concat[num1] = s2[num2];
		num1++;
		num2++;
	}
	concat[num1] = '\0';
	return (concat);
}
