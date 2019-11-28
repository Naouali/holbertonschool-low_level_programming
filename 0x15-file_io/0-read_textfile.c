#include "holberton"

/**
 * read_textfile - function that reads files
 *@filename: the file's name
 *@letters: size of file
 *Return: file descripto
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int fd;
	ssize_t r;
	ssize_t s;
	char *str;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(letters * sizeof(char));
	if (str == NULL)
		return (0);
	r = read(fd, str, letters);
	if (r == -1)
		return (0);
	str[r] = '\0';
	s = write(STDOUT_FILENO, str, r);
	if (s == -1 || s != r)
		return (0);
	close(fd);
	return (s);
}

