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
	char *buff;
	int count;
	int wr;

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (-1);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	count = read(fd, buff, letters);

	if (count == -1)
		return (0);

	wr = write(STDIN_FILENO, buff, count);

	close(fd);

	if (wr != count && wr == -1)
		return (0);

return (wr);
}
