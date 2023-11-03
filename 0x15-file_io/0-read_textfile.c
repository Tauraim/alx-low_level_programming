#include "main.h"

/**
 * read_textfile - read text file and prints it to the posix
 * @filename: parameter to check
 * @letters: parameter return
 * Return: zero if file not read or opened
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	ssize_t data1, data2;
	char *dfile;

	if (!filename)
		return (0);
	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	dfile = malloc(sizeof(char) * (letters));
	if (dfile)
		return (0);
	data1 = read(fn, dfile, letters);
	data2 = write(STDOUT_FILENO, dfile, data1);

	close(fn);
	free(dfile);
	return (data2);
}

