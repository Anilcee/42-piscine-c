/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancengiz <ancengiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:52:09 by ancengiz          #+#    #+#             */
/*   Updated: 2024/02/12 19:59:18 by ancengiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	z;

	i = 1;
	j = 0;
	z = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[argc - i][j])
		{
			write(1, &argv[argc - i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
