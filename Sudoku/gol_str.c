/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gol_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 17:08:45 by crycherd          #+#    #+#             */
/*   Updated: 2019/02/11 15:01:03 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "goliyo.h"

void	gol_str(t_cell **cells)
{
	int col_a;
	int col_b;
	int row;

	row = 0;
	while (row < 9)
	{
		col_a = 0;
		while (col_a < 9)
		{
			col_b = col_a + 1;
			while (col_b < 9)
			{
				if (check_cell(cells[row][col_a], cells[row][col_b]))
				{
					rm_rep_str(cells, col_a, col_b, row);
				}
				col_b++;
			}
			col_a++;
		}
		row++;
	}
}
