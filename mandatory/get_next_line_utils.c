/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgori <fgori@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:55:17 by fgori             #+#    #+#             */
/*   Updated: 2023/11/17 14:45:59 by fgori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*concat(char *dest, char *src, ssize_t size)
{
	int		i;
	int		j;
	char	*con;

	if (!dest)
	{
		dest = (char *)malloc(1);
		dest[0] = '\0';
	}
	con = (char *)malloc((ft_strlen(dest) + size) + 1 * sizeof(char));
	if (!con)
		return (NULL);
	i = -1;
	j = 0;
	while (dest[++i])
		con[i] = dest[i];
	while (src[j])
	{
		con[i] = src[j];
		i++;
		j++;
	}
	con[i] = '\0';
	free(dest);
	return (con);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
