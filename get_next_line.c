#include "get_next_line.h"

char *get_next_line(int fd)
{
	char *save_line;
	char *read_line;
	char temp;
	int i;
	int read_int;

	i = 0;
	read_int  = 1;
	read_line = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!read_line)
		return (NULL);
	read_int = read(fd, read_line, BUFFER_SIZE);
	while (read_int)
	{
		read_line[read_int] = 0;
		if (!save_line)
			temp = ft_strdup(read_line);
		else
			temp = ft_strjoin(save_line, read_line);
		if (newline_found(read_line))



		read_int = read(fd, read_line, BUFFER_SIZE);
	}
}
