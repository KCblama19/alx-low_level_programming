#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: 0 on success
 */
void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	char alphabet;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		_putchar('\n');
	}

}
