#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_


#ifndef BUFFER_SIZE
# define BUFFER_SIZE 9

#endif

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

char *get_next_line(int fd);
int ft_strlen(char *s);
int newline_found(char *read_line);
char *ft_strjoin(char *s1, char *s2);







#endif
