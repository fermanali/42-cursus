/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 04:07:44 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/25 04:10:01 by farpacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*move_line(char *s)
{
	char	*dest;

	dest = ft_strchr(s, '\n');
	if (!dest)
	{
		free(s);
		return (NULL);
	}
	if (*(dest + 1))
		dest = ft_strdup(dest + 1);
	else
		dest = NULL;
	free(s);
	return (dest);
}

char	*get_next_line(int fd)
{
	static char	*s[9999];
	char		*dest;
	char		*buffer;
	int			size;

	buffer = malloc(BUFFER_SIZE + 1);
	size = read(fd, buffer, BUFFER_SIZE);
	buffer[size] = 0;
	while (size > 0)
	{
		if (!s[fd])
			s[fd] = ft_strdup(buffer);
		else
			s[fd] = ft_strjoin(s[fd], buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
		size = read(fd, buffer, BUFFER_SIZE);
		buffer[size] = 0;
	}
	dest = ft_substr(s[fd], 0, ft_strchr(s[fd], '\n') - s[fd] + 1);
	s[fd] = move_line(s[fd]);
	free(buffer);
	return (dest);
}
