/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gol_stl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 18:55:02 by crycherd          #+#    #+#             */
/*   Updated: 2019/02/10 15:38:15 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "goliyo.h"

void	gol_stl(t_cell **cells)
{
	int row_a;
	int row_b;
	int col;

	col = 0;
	while (col < 9)
	{
		row_a = 0;
		while (row_a < 9)
		{
			row_b = row_a + 1;
			while (row_b < 9)
			{
				if (check_cell(cells[row_a][col], cells[row_b][col]))
				{
					rm_rep_stl(cells, row_a, row_b, col);
				}
				row_b++;
			}
			row_a++;
		}
		col++;
	}
}
