/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 16:41:54 by sselusa           #+#    #+#             */
/*   Updated: 2019/02/09 20:21:16 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filter.h"

void	delete_choice(t_cell *cell, int choice)
{
	int	pos;

	pos = 0;
	while (pos < 9)
	{
		if (cell->choices[pos] == choice)
		{
			cell->choices[pos] = 0;
			cell->posibs--;
		}
		pos++;
	}
}

void	check_box(int cell_x, int cell_y, t_cell **cells)
{
	int x;
	int y;
	int	x_end;
	int	y_end;

	x = cell_x - (cell_x % 3);
	y = cell_y - (cell_y % 3);
	x_end = x + 3;
	y_end = y + 3;
	while (x < x_end)
	{
		while (y < y_end)
		{
			if (x == cell_x && y == cell_y)
			{
				y++;
				continue;
			}
			if (cells[y][x].posibs == 1)
				delete_choice(&(cells[cell_y][cell_x]),
						get_result(cells[y][x]));
			y++;
		}
		x++;
	}
}

void	check_row(int cell_x, int cell_y, t_cell **cells)
{
	int	pos;

	pos = 0;
	while (pos < 9)
	{
		if (pos == cell_x)
		{
			pos++;
			continue;
		}
		if (cells[cell_y][pos].posibs == 1)
			delete_choice(&(cells[cell_y][cell_x]),
					get_result(cells[cell_y][pos]));
		pos++;
	}
}

void	check_col(int cell_x, int cell_y, t_cell **cells)
{
	int	pos;

	pos = 0;
	while (pos < 9)
	{
		if (pos == cell_y)
		{
			pos++;
			continue;
		}
		if (cells[pos][cell_x].posibs == 1)
			delete_choice(&(cells[cell_y][cell_x]),
					get_result(cells[pos][cell_x]));
		pos++;
	}
}

void	filter(t_cell **cells)
{
	int cell_x;
	int cell_y;

	cell_x = 0;
	while (cell_x < 9)
	{
		cell_y = 0;
		while (cell_y < 9)
		{
			check_row(cell_x, cell_y, cells);
			check_col(cell_x, cell_y, cells);
			check_box(cell_x, cell_y, cells);
			cell_y++;
		}
		cell_x++;
	}
}
