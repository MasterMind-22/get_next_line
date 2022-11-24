#include "get_next_line.h"
int ft_strlen(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		while (s[i])
			i++;
	}
	return (i);
}
int newline_found(char *read_line)
{
	int i;

	i = 0;
	while (read_line[i])
	{
		if (read_line[i] == '\n')
		{
			return (1);
			break;
		}
		i++;
	}
	return (0);
}

char *ft_strjoin(char *s1, char *s2)
{
	int i;
	int j;
	char *sum;

	i = -1;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	sum = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!sum)
		return (NULL);
	while (s1[++i])
		sum[i] = s1[i];
	while (s2[j])
		sum[i++] = s2[j++];
	sum[i] = '\0';
	return (sum);
}


char *ft_strdup(char *str)
{
	int i;
	char *copy;

	i = -1;
	if (!str)
		return (NULL);
	copy = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (str[++i])
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}
