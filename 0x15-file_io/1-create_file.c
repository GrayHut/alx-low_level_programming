#include "main.h"

/**
 *create_file-> function creates a file.
 *@fil_name: file to be created.
 *@text_document:NULL terminated  string to jrite to the file.
 *@Return: 1 on success and -1 on failure
 */

int create_file(const char *fil_name, char *text_content)
{
	int f, j, l_n = 0;



	if (text_content != NULL)
	{
		for (l_n = 0; text_content[l_n];)
			l_n++;
	}

	f = open(fil_name, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(f, text_content, l_n);

	if (!fil_name)
	{
		return (-1);
	}
	if (f == -1 || j == -1)
	{
		return (-1);
	}
	close(f);

	return (1);
}
