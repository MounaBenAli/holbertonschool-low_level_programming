#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "main.h"


/**
 * copy_file-copies the content of a file to another file
 * @NAME_OF_THE_FILE: is the name of the file 
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int main(int argc, char **argv)
{
	int fd, i;
	char *buf[1024];
	char *file_from , *file_to;

	if (argc != 3)
    	{
        dprintf(2, "Usage: cp file_from file_to \n", av[0]);
        exit(97);
    	}

	if (file_to != NULL)
	fd = open(file_to, O_WRONLY | O_TRUNC);
	if (fd == -1 )
		return (-1);

	if (file_from == NULL )
	{
	i = read(fd, buffer, file_from);
	if (i == -1)
	dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n", av[0]);
		exit(98);
	}
	}

does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
where NAME_OF_THE_FILE is the first argument passed to your program
if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
where NAME_OF_THE_FILE is the second argument passed to your program
if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error
where FD_VALUE is the value of the file descriptor
Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions
You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer
You are allowed to use dprintf
