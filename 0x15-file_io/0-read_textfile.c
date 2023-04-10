#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *read_textfile-> function that reads a text file and prints it to the POSIX
 *stdout.
 *@filename:pointer to file to be read.
 *@letters:no. of characters to be read.
 *Return: no. of letters to be read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, j, w;
	char *mem;

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		return (0);
	}

	mem = malloc(sizeof(char) * letters);
	j = read(f, mem, letters);
	w = write(STDOUT_FILENO, mem, j);

	free(mem);
	close(f);

	return (w);
}
