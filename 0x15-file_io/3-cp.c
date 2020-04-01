#include "holberton.h"
/**
 * main - Program that copies the conetnt of a file to another file.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return:
 */
int main(int argc, char *argv[])
{
	int fr, fw, rlength, wlength, rclose, wclose;
	char buf[1295];
	mode_t m = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fr = open(argv[1], O_RDONLY);

	if (fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	fw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, m);

	if (fw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	rlength = wlength = 1;

	while (rlength)
	{
		rlength = read(fr, buf, 1295);
		if (rlength == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		}
		if (rlength > 0)
		{
			wlength = write(fw, buf, rlength);
			if (wlength == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
			}

		}
	}
	rclose = close(fr);
	if (rclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr), exit(100);
	}
	wclose = close(fw);

	if (wclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fw), exit(100);
	}
	return (0);
}
