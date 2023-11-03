#include "main.h"

/**
 * append_text_to_file - terminated string to add at the end of the line
 * @filename: parameter to check
 * @text_content: pointer parameter
 * Return:  1 on success and -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fn;
	int data1;
	int rwr;

	if (!filename)
		return (-1);

	fn = open(filename, O_WRONLY | O_APPEND);
	if (fn == -1)
		return (-1);
	if (text_content)
	{
		for (data1 = 0; text_content[data1]; data1++)
			;
		rwr = write(fn, text_content, data1);
		if (rwr == -1)
			return (-1);
	}
	close(fn);
	return (1);
}
