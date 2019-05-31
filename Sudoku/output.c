/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 16:36:34 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/10 20:32:07 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "output.h"
#include "libraries.h"

void	print_cells(t_cell **cells)
{
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	while (i < SIDE_LENGTH)
	{
		j = 0;
		while (j < SIDE_LENGTH)
		{
			ft_putchar(get_result(cells[i][j]) + 48);
			if (j != SIDE_LENGTH - 1)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
