#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int row;
	int col;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (row = 0; s[row] != '\0'; row++)
	{
		for (col = 0; col < 52; col++)
		{
			if (s[row] == data1[col])
			{
				s[row] = datarot[col];
				break;
			}
		}
	}
	return (s);
}
