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
	int digits1, digits2;
	int count = 0;

	for (digits1 = 0; digits1 <= 99; digits1++)
	{
		for (digits2 = digits1 + 1; digits2 <= 99; digits2++)
		{
			putchar(digits1 / 10 + '0');
			putchar(digits1 % 10 + '0');
			putchar(' ');
			putchar(digits2 / 10 + '0');
			putchar(digits2 % 10 + '0');

			if (digits1 != 98 || digits2 != 99)
			{
				putchar(',');
				putchar(' ');
				count++;
			}
		}
	}

	putchar('\n');

	return (0);
}
