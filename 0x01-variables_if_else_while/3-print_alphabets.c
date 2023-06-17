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
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}

	for (alphabet = 'A'; alphabet <= 'Z' ; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
