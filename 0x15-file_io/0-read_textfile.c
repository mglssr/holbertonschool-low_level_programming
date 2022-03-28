#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
* read_textfile - function that reads a text file and prints it to the stout
* @filename: archivo a leer
* @letters: number of letters it should read and print
* Return: algo idk
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buff[1024];
	int count;
	int wr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	count = read(fd, buff, letters);

	if (count == -1)
		return (0);

	wr = write(STDIN_FILENO, buff, count);

	if (wr != count)
		return (0);

return (wr);
}
