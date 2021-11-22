#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "main.h"



/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: text file to read and printed
 * @letters: number of letters it should read and print
 *
 * Return: number of letters read and printed or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	size_t countread, countwrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf  = malloc(sizeof(size_t) * letters);
	if (buf == NULL)
		return (0);

	countread = read(fd, buf, letters);
	if (fd == -1)
	{
	free(buf);
	close(fd);
	return (0);
	}

	countwrite = write(STDOUT_FILENO, buf, countread);
	if (fd == -1)
	{
	free(buf);
	close(fd);
	return (0);
	}
	close(fd);
	free(buf);
	return (countwrite);
}
