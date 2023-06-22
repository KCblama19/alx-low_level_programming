#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sequence;
	int fibo1 = 1;
	int fibo2 = 2;
	int fibo_next;

	printf("%d, %d", fibo1, fibo2);

	for (sequence = 3; sequence <= 98; sequence++)
	{
		fibo_next = fibo1 + fibo2;

		printf(", %d", fibo_next);

		fibo1 = fibo2;
		fibo2 = fibo_next;
	}

	printf("\n");

	return (0);
}
