/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaffroy <asaffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:03:25 by asaffroy          #+#    #+#             */
/*   Updated: 2021/11/17 14:01:07 by asaffroy         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*ft_chunk_of_fd(int fd, char *bigstr);
char	*ft_strchr(char *s, int c);
char	*ft_strjoincustom(char *bigstr, char *buffer);
size_t	ft_strlen(char *s);
char	*ft_perfect_line(char *bigstr);
char	*ft_new_line(char *bigstr);

#endif
