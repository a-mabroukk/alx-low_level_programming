#include "main.h"

/**
*read_textfile - reads a text file and prints it to the POSIX standard output
*
*@filename: buffer to read data from
*
*@letters: is the number of letters it should read and print
*
*Return: if filename is NULL and if write fails or does not write
*the expected amount of bytes return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, wd;
size_t sz;
char *s;

s = malloc(sizeof(letters));
if (s == NULL)
{
return (0);
}
if (filename == NULL)
{
return (0);
}
fd = open("filename", O_RDWR);
if (fd == -1)
{
free(s);
return (0);
}
sz = read(fd, s, letters);
wd = write(STDOUT_FILENO, s, sz);
close(fd);
return (wd);
}
