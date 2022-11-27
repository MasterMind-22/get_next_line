//#include "get_next_line.h"
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int fd = open("file", O_RDONLY);
	//printf("%s\n", get_next_line(fd));
	printf("%s", ft_read_to_left_str(fd));
}
