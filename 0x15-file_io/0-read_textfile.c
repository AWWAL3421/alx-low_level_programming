#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile- Read text file and prints it to the POSIX STDOUT
 * @filename: text file being read
 * @letters: number of letters to be read and print
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fil;
	ssize_t w;
	ssize_t t;


	fil = open(filename, O_RDONLY);
	if (fil == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fil, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fil);
	return (w);
}
