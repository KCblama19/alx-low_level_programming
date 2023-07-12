#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate string to new memory space location
 * @str: string to duplicate
 * Return: pointer to duplicated string, NULL if fail
 */
char *_strdup(char *str)
{
	char *dup;
	int i, num = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (num = 0; str[num]; num++)
		dup[num] = str[num];

	return (dup);
}
