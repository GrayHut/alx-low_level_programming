#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *create_mem-> creates some 1024 bytes for a buffer.
 *@file: file buffer.
 *
 *Return: pointer to allocated buffer
 */

char *create_mem(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - function  closes file descriptors.
 * @fd: file descriptor to be closed.
 */
void close_file(int f)
{
	int c;

	c = close(f);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}



int main(int argc, char *argv[])
{
	int src, dest, j, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_mem(argv[2]);
	src = open(argv[1], O_RDONLY);
	j = read(src, buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(dest, buffer, j);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		j = read(src, buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (j > 0);
	free(buffer);
	close_file(src);
	close_file(dest);
	return (0);
}
