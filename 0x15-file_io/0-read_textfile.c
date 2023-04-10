#include "main.h"
#incluide < stdio.h >

/**
 *read_textfile-> function that reads a text file and prints it to the POSIX
 *stdout.
 *@filename:pointer to file to be read.
 *@letters:no. of characters to be read.
 *Return: no. of letters to be read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	unsigned long int, j, w;
	char *mem;

	f = fopen(filename, "r");

	if (f == -1)
	{
		return (0);
	}

	m = malloc(sizeof(char) * letters);
	j = read(f, m, letters);
	w = write(STDOUT_FILENO, mem, j);

	free(mem);
	close(f);

	return (w);
}
