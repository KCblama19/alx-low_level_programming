#include <stdlib.h>
#include "main.h"

/**
 * count_words - counts the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int flag = 0;
	int words = 0;

	while (*str)
	{
		if (*str == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
		str++;
	}

	return (words);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 *         or NULL (Error)
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int len = 0;
	while (str[len])
		len++;

	int words = count_words(str);
	if (words == 0)
		return (NULL);

	char **matrix = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	int i, k = 0, c = 0, start, end;
	char *tmp;

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				int j;
				for (j = start; j < end; j++)
					tmp[j - start] = str[j];
				tmp[j - start] = '\0';
				matrix[k] = tmp;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
