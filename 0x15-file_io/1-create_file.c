#include "main.h"

/**
 * create_file - create a file where filename and text_content is NULL
 * @filename: parameter pointer
 * @text_content: parameter pointer
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fn;
	int num_letters;
	int rwr;

	if (!filename)
		return (-1);

	fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fn == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;
		rwr = write(fn, text_content, num_letters);
	if (rwr == -1)
		return (-1);
	close(fn);
	return (1);
}
