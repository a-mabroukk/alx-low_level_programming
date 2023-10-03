#include "main.h"

/**
*create_file - creates a file
*
*@filename: is the name of the file to create
*
*@text_content: is a NULL terminated string to write to the file
*
*Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t sz;
int fd;

if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
text_content = "";
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd < 0)
{
return (-1);
}
sz = write(fd, text_content, strlen(text_content));
close(fd);
if (sz < 0)
{
return (-1);
}
return (1);
}
