#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 *
 * Return: 0 on success, 1 for incorrect number of arguments,
 *         2 for negative number of bytes
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return 2;
	}

	unsigned char *main_addr = (unsigned char *)&main;

	for (i = 0; i < num_bytes; i++)
		printf("%.2x ", main_addr[i]);

	printf("\n");

	return 0;
}
