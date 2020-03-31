#include "holberton.h"
/**
 *create_file - Functions that create a file
 *
 *@filename: filename.
 *@text_content: text content.
 *
 *Return: count.
 */
int create_file(const char *filename, char *text_content)
{
	int a;
	int b;

	if (filename == NULL)
	{
		return (-1);
	}
	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (a == -1)
	{
		close(a);
		return (-1);
	}

	if (text_content != NULL)
	{
		for (b = 0; text_content[b] != 0; b++)
		{
		}
		write(a, text_content, b);
	}
	close(a);
	return (1);
}
