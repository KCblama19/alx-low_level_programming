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
	int base10;

	for (base10 = 0; base10 <= 9; base10++)
	{
		printf("%d", base10);
	}

	printf("\n");

	return (0);
}
