/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 13:29:25 by anroche           #+#    #+#             */
/*   Updated: 2017/02/07 15:22:03 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUFF_SIZE 11

int		get_next_line(const int fd, char **line);
void	ft_putchar(char c);
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif
