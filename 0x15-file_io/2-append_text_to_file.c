#include "main.h"

/**
 * append_text_to_file- Adds a text at the end of the text file.
 * @filename: A text file Pointer
 * @text_content: The contet to append to the text file.
 *
 * Return: Fail or NULL file or No PERMISSION- -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fptr, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fptr = open(filename, O_WRONLY | O_APPEND);
	w = write(fptr, text_content, len);

	if (fptr == -1 || w == -1)
		return (-1);

	close(fptr);

	return (1);

