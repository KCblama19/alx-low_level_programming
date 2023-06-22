#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int firstT = 1;
	int secondT = 2;
	int next;

	while (secondT <= 4000000)
	{
		if (secondT % 2 == 0)
		{
			sum += secondT;
		}

		next = firstT + secondT;

		firstT = secondT;
		secondT = next;
	}

	printf("%d\n", sum);

	return (0);
}
