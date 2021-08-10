#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - A function that append file that reads text.
 * @filename: argument of function.
 * @text_content: argument of function.
 * Return: Always 0 (Success)
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, i, view;

if (filename == NULL)
return (-1);

if (text_content == NULL)
return (1);

fd = open(filename, O_APPEND | O_WRONLY);
if (fd == -1)
return (-1);


for (i = 0; text_content[i] != '\0'; i++)
{
;
}
view = write(fd, text_content, i);
if (view == -1)
return (-1);

close(fd);
return (1);
}