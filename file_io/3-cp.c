#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * print_exit - print the exit
 * @code: exit status
 * @output: format to print
 * @arg: arg of fprintf
 */
void print_exit(int code, const char *output, const char *arg)
{
dprintf(STDERR_FILENO, output, arg);
exit(code);
}
int main(int argc, char **argv)
{
int fd1, fd2;
ssize_t numread, numwrite;
char buffer[1024];
const char *file_to, *file_from;
if (argc != 3)
{
print_exit(97, "Usage: cp file_from file_to\n", "");
}
file_from = argv[1];
file_to = argv[2];
fd1 = open(file_from, O_RDONLY);
if (fd1 == -1)
{
print_exit(98, "Error: Can't read from file %s\n", file_from);
}
fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd2 == -1)
{
close(fd1);
print_exit(99, "Error: Can't write to %s\n", file_to);
}
while ((numread = read(fd1, buffer, sizeof(buffer))) > 0)
{
numwrite = write(fd2, buffer, numread);
if (numwrite == -1)
{
close(fd1);
close(fd2);
print_exit(99, "Error: Can't write to %s\n", file_to);
}
}
if (numread == -1)
{
close(fd1);
close(fd2);
print_exit(98, "Error: Can't read from file %s\n", file_from);
}
if (close(fd1) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
exit(100);
}
if (close(fd2) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
exit(100);
}
return 0;
}
