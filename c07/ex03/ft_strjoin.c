/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancengiz <ancengiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:27:14 by ancengiz          #+#    #+#             */
/*   Updated: 2024/02/15 20:52:30 by ancengiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_create_str(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += (ft_strlen(sep) * (size - 1)) + 1;
	if (size <= 0)
		len = 1;
	str = (char *) malloc(sizeof(char) * len);
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		index;
	char	*str;

	i = 0;
	index = 0;
	str = ft_create_str(size, strs, sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[index++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
		{
			str[index] = sep[j];
			index++;
			j++;
		}
		i++;
	}
	str[index] = '\0';
	return (str);
}
