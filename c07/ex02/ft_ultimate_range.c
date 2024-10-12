/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancengiz <ancengiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:26:43 by ancengiz          #+#    #+#             */
/*   Updated: 2024/02/15 20:49:09 by ancengiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *) malloc(sizeof(int) * (max - min));
	if (tab == NULL)
	{
		return (-1);
	}
	else
	{
		index = 0;
		while (index < max - min)
		{
			tab[index] = min + index;
			index++;
		}
		*range = tab;
		return (index);
	}
}
