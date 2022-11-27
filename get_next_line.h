#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_


#ifndef BUFFER_SIZE
# define BUFFER_SIZE 20

#endif

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

char *get_next_line(int fd);
size_t ft_strlen(char *s);
int newline_found(char *read_line);
char *ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);



#endif
