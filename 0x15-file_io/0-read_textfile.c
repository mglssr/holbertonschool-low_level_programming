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
	ssize_t fd;
	char *buff;
	ssize_t count;
	ssize_t wr;

	buff = malloc(sizeof(char) * letters);
	
	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	count = read(fd, buff, letters);

	if (count == -1)
	{
		free(buff);
		return (0);
	}

	wr = write(STDIN_FILENO, buff, count);

	close(fd);

	if (wr != count || wr == -1)
		return (0);

	free(buff);
	return (wr);
}
