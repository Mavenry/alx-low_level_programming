#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its contents to the standard output
 * @filename: The name of the file to be read
 * @letters: The number of letters to read and print
 *
 * This function opens the specified text file and reads the specified number
 * of letters from it. The content is then printed to the standard output.
 *
 * Return: The actual number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fx;
	ssize_t lent, lenx;
	char *buff;

	if (filename == NULL)
		return (0);
	fx = open(filename, O_RDONLY);
	if (fx == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fx);
		return (0);
	}
	lent = read(fx, buff, letters);
	close(fx);
	if (lent == -1)
	{
		free(buff);
		return (0);
	}
	lenx = write(STDOUT_FILENO, buff, lent);
	free(buff);
	if (lent != lenx)
		return (0);
	return (lenx);
}
