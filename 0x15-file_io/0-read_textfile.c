#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text file and prints its content.
 * @filename: the text file to be read.
 * @letters: the number of letter in the text file
 * Return: 0 when the function fail, w outputsactual bytes.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fptr;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fptr == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fptr, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fptr);
	return (w);
}
