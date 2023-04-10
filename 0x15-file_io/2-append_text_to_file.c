#include "main.h"

/**
 *append_text_to_file-> function appends text at the end of a file.
 *@filame: file tf be acted upon.
 *@text_content: sting to be added at end of file.
 *Return: 1 fn success and -1 on failure.
 */

int append_text_to_file(const char *filame, char *text_content)
{
	int f, j, l = 0;


	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	f = open(filame, O_WRONLY | O_APPEND);
	j = write(f, text_content, l);

	if (f == -1 || j == -1)
	{
		return (-1);
	}

	if (!filame)
	{
		return (-1);
	}

	close(f);

	return (1);

}
