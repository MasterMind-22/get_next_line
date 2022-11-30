/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonadry <yonadry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:05:25 by yonadry           #+#    #+#             */
/*   Updated: 2022/11/30 14:16:45 by yonadry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include<string.h>
# include<fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20

# endif

char	*get_next_line(int fd);
size_t	ft_strlen(char *s);
int		newline_found(char *read_line);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);

#endif