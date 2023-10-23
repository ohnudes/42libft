/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaturan <nmaturan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:25:50 by nmaturan          #+#    #+#             */
/*   Updated: 2023/10/23 14:33:27 by nmaturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

static char	*clean_content(char *content, char *eol)
{
	size_t	remaining_size;
	char	*newstr;
	char	*start;

	newstr = NULL;
	remaining_size = 0;
	if (eol && eol + 1)
	{
		start = eol + 1;
		remaining_size = ft_strlen(start);
	}
	else if (*content == '\0')
		return (ft_free(content));
	newstr = malloc(sizeof(char) * (remaining_size + 1));
	if (!newstr)
		return (ft_free(content));
	newstr[remaining_size] = '\0';
	while (remaining_size > 0)
	{
		newstr[remaining_size - 1] = start[remaining_size - 1];
		remaining_size--;
	}
	free (content);
	return (newstr);
}

static char	*produce_line(char *content, char *eol)
{
	char	*line;
	size_t	size;
	size_t	i;

	line = NULL;
	i = 0;
	size = 0;
	if (!eol)
		eol = content + ft_strlen(content);
	size = eol - content + 1;
	if (*eol == '\0')
		size -= 1;
	line = malloc(sizeof(char) * (size + 1));
	if (!line)
		return (NULL);
	line[size] = '\0';
	while (i < size)
	{
		line[i] = content[i];
		i++;
	}
	if (*line == '\0')
		return (ft_free(line));
	return (line);
}

static char	*fill_content(char *content, int rbytes, int fd, char **eol)
{
	char	*tmp;

	tmp = NULL;
	tmp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!tmp)
		return (ft_free(content));
	tmp[BUFFER_SIZE] = '\0';
	while (!*eol)
	{
		rbytes = read(fd, tmp, BUFFER_SIZE);
		if (rbytes > 0)
		{
			content = ft_strappend(content, tmp, rbytes);
			if (gnl_strchr(tmp, '\n'))
				*eol = gnl_strchr(content, '\n');
		}
		else if (rbytes == -1 || !content)
			content = ft_free(content);
		if (rbytes <= 0 || rbytes < BUFFER_SIZE)
			break ;
	}
	free(tmp);
	return (content);
}

char	*get_next_line(int fd)
{
	static char	*content[256];
	char		*line;
	char		*eol;
	int			rbytes;

	if (fd < 0)
		return (NULL);
	line = NULL;
	eol = NULL;
	rbytes = 0;
	eol = gnl_strchr(content[fd], '\n');
	if (!eol)
		content[fd] = fill_content(content[fd], rbytes, fd, &eol);
	if (content[fd] && *content[fd] != '\0')
		line = produce_line(content[fd], eol);
	if (!content[fd] || *content[fd] == '\0' || (!line && content[fd]))
	{
		content[fd] = ft_free(content[fd]);
		return (content[fd]);
	}
	content[fd] = clean_content(content[fd], eol);
	return (line);
}
