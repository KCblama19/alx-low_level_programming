#include "main.h"
#include <stdio.h>
/**
 * print_fibonacci - prints 50 fibonacci numbers
 *
 * @sequence: takes an integer value
 *
 */
void print_fibonacci(int sequence)
{
	if (sequence < 1)
	{
		return;
	}

	printf("1, 2");

	int i;
	unsigned long long a = 1, b = 2;

	for (i = 3; i <= sequence; i++)
	{
		unsigned long long c = a + b;

		printf(", %llu", c);
		a = b;
		b = c;
	}

	printf("\n");
}

/**
 * main - Entry point
 *
 * print_fibonacci - print character 50
 *
 * Return: Always 0
 */
int main(void)
{
	print_fibonacci(50);

	return (0);
}
