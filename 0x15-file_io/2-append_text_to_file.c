#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - creates a file and puts text in it
 * with 600 modes
 *
 * @filename: name of the file
 * @text_content: text to append in the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t length = 0, inlen = 0;
	char *fp;

	if (filename == NULL)
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
