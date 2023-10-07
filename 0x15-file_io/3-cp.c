#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define PERMISSION (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
/**
*main - Entry ponit
*@argc: number of argument
*@argv: is an array of C-style strings
*Return: value
*/
int main(int argc, char *argv[])
{
int file_from, file_to;
ssize_t b1;
char buf[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, USAGE);
exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]);
exit(98);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSION);
if (file_to == -1)
{
dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]);
exit(99);
}
while ((b1 = read(file_from, buf, 1024)) > 0)
{
if (write(file_to, buf, b1) != b1)
dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
if (b1 == -1)
dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
}
file_from = close(file_from);
file_to = close(file_to);
if (file_from)
{
dprintf(STDERR_FILENO, ERR_NOCLOSE, file_from), exit(100);
}
if (file_to)
{
dprintf(STDERR_FILENO, ERR_NOCLOSE, file_to), exit(100);
}
return (EXIT_SUCCESS);
}
