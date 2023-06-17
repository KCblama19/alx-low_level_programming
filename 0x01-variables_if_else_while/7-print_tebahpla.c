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
	char reverseAlphabet;

	for (reverseAlphabet = 'z'; reverseAlphabet >= 'a'; reverseAlphabet--)
	{
		putchar(reverseAlphabet);
	}

	putchar('\n');

	return (0);
}
