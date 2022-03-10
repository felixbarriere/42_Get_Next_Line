/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:05:29 by fbarrier          #+#    #+#             */
/*   Updated: 2021/12/01 16:05:29 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int	ft_strchr_gnl(char *s, int c)
{
	if (!s)
		return (0);
	if (c == '\0')
		return (1);
	while (*s != '\0')
	{
		if (*s == (char) c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strjoin_gnl(char *left_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!left_str)
	{
		left_str = (char *)malloc(1 * sizeof(char));
		left_str[0] = '\0';
	}
	if (!left_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(left_str) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (left_str)
		while (left_str[++i] != '\0')
			str[i] = left_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(left_str) + ft_strlen(buff)] = '\0';
	free(left_str);
	return (str);
}

char	*ft_get_line(char *str)
{
	int		i;
	char	*str2;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	str2 = (char *)malloc(sizeof(char) * (i + 2));
	if (!str2)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		str2[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

char	*ft_reset_cursor(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	str2 = (char *)malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!str2)
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		str2[j++] = str[i++];
	str2[j] = '\0';
	free(str);
	return (str2);
}
