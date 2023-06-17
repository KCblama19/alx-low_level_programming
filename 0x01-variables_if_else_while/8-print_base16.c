#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	char base16;

	for (base16 = '0'; base16 <= '9'; base16++)
	{
		putchar(base16);
	}

	for (base16 = 'a'; base16 <= 'f'; base16++)
	{
		putchar(base16);
	}

	putchar('\n');

	return (0);
}
