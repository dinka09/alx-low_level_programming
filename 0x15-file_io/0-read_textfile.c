#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads and prints text from a file
 * @filename: name of the file
 * @letters: number of the text file to be printed
 * Return: number of file read, if end of the file 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int length, writtenchars;
	char *fp;

	if (filename == NULL || letters == 0)
		return (0);
	fp = malloc(sizeof(char) * (letters));
	if (fp == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(fp);
		return (0);
	}
	length = read(file, fp, letters);
	if (length == -1)
	{
		free(fp);
		close(file);
		return (0);
	}
	writtenchars = write(STDOUT_FILENO, fp, length);

	free(fp);
	close(file);
	if (writtenchars != length)
		return (0);
	return (length);

}
