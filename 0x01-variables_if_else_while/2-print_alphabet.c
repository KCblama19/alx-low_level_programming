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
	int character = 'a';

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}

	return (0);
}
