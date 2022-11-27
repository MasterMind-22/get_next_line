#include "get_next_line.h"


char *read_fd(int fd)
{
	int read_int;
	char *read_line;
	char *save_line;

	read_int = 1;
	save_line = NULL;
	read_line = malloc(BUFFER_SIZE + 1);
	if(!read_line)
		return (NULL);
	while (!newline_found(read_line) && read_int)
	{
		read_int = read(fd, read_line, BUFFER_SIZE);
		if (read_int == -1)
		{
			free (read_line);
			return (NULL);
		}
		read_line[BUFFER_SIZE] = '\0';
		if (save_line == NULL)
			save_line = ft_strdup(read_line);
		else
			save_line = ft_strjoin(save_line, read_line);
	}
	free(read_line);
	return (save_line);
}
char *return_line_f(char *read_line)
{
	int i;
	char *return_line;

	i = 0;
	return_line = malloc(newline_found(read_line) + 2);
	while (read_line[i] != '\n')
	{
		return_line[i] = read_line[i];
		i++;
	}
	if (newline_found(read_line))
		return_line[i] = '\n';
	return_line[i + 1] = '\0';
	return (return_line);
}
char *get_next_line(int fd)
{
	char *return_line;
	char *read_line;
	
	read_line = read_fd(fd);
	return_line = return_line_f(read_line);
	return (return_line);
}

int main(void)
{
	int fd = open("file", O_RDONLY);
	printf("|%s|", get_next_line(fd));
}
