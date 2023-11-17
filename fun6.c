#include "main.h"
/**
 * myopen_file - function that opens a file
 * @fi_name: the file namepath
 * Return: void
 */
void myopen_file(char *fi_name)
{
	FILE *fd = fopen(fi_name, "r");
	if (fi_name == NULL || fd == NULL)
		myerror(2, fi_name);
	myread_file(fd);
	fclose(fd);
}
/**
 * myread_file - function that reads a file
 * @fd: pointer to file descriptor
 * Return: void
 */
void myread_file(FILE *fd)
{
	int myline_number, form = 0;
	char *buffer = NULL;
	size_t mylen = 0;

	for (myline_number = 1; getline(&buffer, &mylen, fd) != -1; myline_number++)
	{
		form = myparse_line(buffer, myline_number, form);
	}
	free(buffer);
}

