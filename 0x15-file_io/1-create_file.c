#include "main.h"

/**
 * create_file - Creates the required text file.
 * @filename: Pointer to the text file created.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1 for success -1 for fail.
 */
int create_file(const char *filename, char *text_content)
{
	int fptr, w, num = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (num = 0; text_content[num];)
			num++;
	}

	fptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fptr, text_content, num);

	if (fptr == -1 || w == -1)
		return (-1);

	close(fptr);

	return (1);
}

