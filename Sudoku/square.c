/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 03:08:29 by crycherd          #+#    #+#             */
/*   Updated: 2019/02/10 19:44:35 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "goliyo.h"

void	inside_sq(t_cell **cells, t_cell cell, int st_row, int st_col)
{
	int small_sq;
	int s_x;
	int s_y;

	small_sq = 0;
	while (small_sq < 9)
	{
		s_x = small_sq % 3;
		s_y = small_sq / 3;
		if (cell.x != (s_x + st_row) && cell.y != (s_y + st_col))
			rm_dig(&cells[s_y + st_col][s_x + st_row], cell.choices);
		small_sq++;
	}
}

void	square(t_cell **cells)
{
	int big_sq;
	int small_sq;
	int b_x;
	int b_y;

	big_sq = 0;
	while (big_sq < 9)
	{
		b_x = (big_sq % 3) * 3;
		b_y = (big_sq / 3) * 3;
		small_sq = 0;
		while (small_sq < 9)
		{
			if (cells[(small_sq / 3) + b_y][(small_sq % 3) + b_x].posibs == 1)
				inside_sq(cells,
						cells[(small_sq / 3) + b_y][(small_sq % 3) + b_x],
						b_x, b_y);
			small_sq++;
		}
		big_sq++;
	}
}
