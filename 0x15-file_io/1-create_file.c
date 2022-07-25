#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * create_file - creates a file and puts text at bottom
 * with 600 modes
 *
 * @filename: name for the file
 * @text_content: text to append to the file
 *
 * Return: 1 on succes, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int length = 0, inlen = 0;
	char *fp;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (inlen = 0, fp = text_content; *fp; fp++)
			inlen++;
		length = write(file, text_content, inlen);
	}
	if (close(file) == -1 || inlen != length)
		return (-1);
	return (1);
}
