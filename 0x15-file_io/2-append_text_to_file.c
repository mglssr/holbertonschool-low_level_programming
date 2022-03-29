#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
* append_text_to_file - function that appends text at the end of a file
* @filename: nombre del archivo xd
* @text_content: string a agregar uwu
* Return: algo idk
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	len = strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, len);

	close(fd);

	if (wr == -1 || wr != len)
		return (-1);

return (1);
}
