#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate command-line arguments into a single string
 * @ac: number of arguments
 * @av: array of arguments
 * Return: concatenated string, NULL if fail
 */
char *argstostr(int ac, char **av)
{
	int num, num2, total_length = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (num = 0; num < ac; num++)
	{
		for (num2 = 0; av[num][num2]; num2++)
			total_length++;
	}
	total_length += ac;

	str = malloc(sizeof(char) * (total_length + 1));
	if (str == NULL)
		return (NULL);

	for (num = 0; num < ac; num++)
	{
		for (num2 = 0; av[num][num2]; num2++)
		{
			str[index] = av[num][num2];
			index++;
		}

		if (str[index] == '\0')
		{
			str[index++] = '\n';
		}
	}

	return (str);
}
