#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "main.h"

int _strlen(char *s);

/**
 * append_text_to_file- appends text at the end of a file.
 * @filename: text file to read and printed
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (filename != NULL)
		return (1);
	if (text_content != NULL)
		write(fd, text_content, _strlen(text_content));
	return (-1);

	if (access(filename, F_OK) == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
	close(fd);
	return (1);
}


/**
 * _strlen - get length of string
 *
 * @s: string
 *
 * Return: length
 **/
int _strlen(char *s)
{
int i;
i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
