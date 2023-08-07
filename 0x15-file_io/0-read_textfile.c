#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: the name of the file to read.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters read and printed,
 *         0 on failure to open, read, or write.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t total;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	total = read(fd, buffer, letters);
	w = write(0, buffer, total);

	free(buffer);
	close(fd);
	return (w);
}
