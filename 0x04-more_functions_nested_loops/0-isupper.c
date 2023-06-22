#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for upper case character
 *
 * @c: recieved integer value
 *
 * Return: 0 or 1
 */
int _isupper(int c);

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return  (0);

	_putchar('\n');
}
