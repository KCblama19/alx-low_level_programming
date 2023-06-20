#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - print the alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
