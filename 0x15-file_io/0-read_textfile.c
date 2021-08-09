#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - A function that creates a file that reads text.
 * @filename: argument of function.
 * @letters: argument of function.
 * Return: Always 0 (Success)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t readfun, writefun;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDWR);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (!buffer)
{
free(buffer);
return (0);
}

readfun = read(fd, buffer, letters);

if (readfun == -1)
return (0);

writefun = write(STDOUT_FILENO, buffer, readfun);
if (writefun == -1)
return (0);

free(buffer);
close(fd);

return (writefun);
}
