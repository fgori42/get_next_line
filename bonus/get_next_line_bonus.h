/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgori <fgori@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:54:15 by fgori             #+#    #+#             */
/*   Updated: 2023/11/20 17:54:21 by fgori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE	
#  define BUFFER_SIZE  42
# endif

# include <stdlib.h>
# include <unistd.h>

char			*make_line( char *str, int fd);
char			*get_next_line(int fd);
char			*only_new(char *dest);
char			*control(char *dest, int i);
char			*concat(char *dest, char *src, ssize_t size);
size_t			ft_strlen(const char *str);
char			*ft_strchr(char *s, int c);

#endif