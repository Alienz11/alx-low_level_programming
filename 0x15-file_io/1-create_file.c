#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - A function that creates a file that reads text.
 * @filename: argument of function.
 * @text_content: argument of function.
 * Return: Always 0 (Success)
 */

int create_file(const char *filename, char *text_content)
{
int fd, i, view;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content)
{
for (i = 0; text_content[i] != '\0'; i++)
{
;
}
view = write(fd, text_content, i);
if (view == -1)
return (-1);
}

close(fd);
return (1);
}
