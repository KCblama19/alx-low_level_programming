#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <unistd.h>

int main(void)
{
	char statement[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, statement, sizeof(statement) - 1);

	return 1;
}
