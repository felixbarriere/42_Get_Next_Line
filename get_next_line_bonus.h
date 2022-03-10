/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:05:18 by fbarrier          #+#    #+#             */
/*   Updated: 2021/12/01 16:05:18 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>

// # ifndef BUFFER_SIZE
// #  define BUFFER_SIZE 1000
// # endif

char	*get_next_line(int fd);
char	*ft_cut_with_leftovers(int fd, char *left_str);
int		ft_strchr_gnl(char *s, int c);
char	*ft_strjoin_gnl(char *left_str, char *buff);
size_t	ft_strlen(char *s);
char	*ft_get_line(char *left_str);
char	*ft_reset_cursor(char *left_str);

#endif