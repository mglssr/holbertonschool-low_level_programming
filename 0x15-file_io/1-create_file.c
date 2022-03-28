#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
* create_file - function that creates a file
* @filename: nombre del archivo xd
* @text_content: is a string to write to the file
* Return: algo idk
*/

int create_file(const char *filename, char *text_content)
{
	int fd, wr;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = strlen(text_content);

	fd = open(filename, O_TRUNC | O_CREAT | O_RDWR, 0600);

	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, len);

	close(fd);

	if (wr == -1)
		return (-1);

return (1);
}
