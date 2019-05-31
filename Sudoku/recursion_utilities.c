/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 15:48:02 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/10 20:08:47 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "recursion_utilities.h"
#include "goliyo.h"

int		select_next(t_cell **cells, t_cell min, int choice)
{
	remove_others(&(cells[min.y][min.x]), min.choices[choice]);
	return (1);
}

void	remove_others(t_cell *cell, int save)
{
	int i;

	i = 0;
	while (i < SIDE_LENGTH)
	{
		if ((*cell).choices[i] != save)
			(*cell).choices[i] = 0;
		i++;
	}
	(*cell).posibs = 1;
	sort_ar((*cell).choices);
}

int		get_mininal_posibs_cell(t_cell **cells)
{
	int min;
	int i;
	int j;

	min = 10;
	i = 0;
	while (i < SIDE_LENGTH)
	{
		j = 0;
		while (j < SIDE_LENGTH)
		{
			if (cells[i][j].posibs == 1)
			{
				j++;
				continue;
			}
			min = min < cells[i][j].posibs ? min : cells[i][j].posibs;
			j++;
		}
		i++;
	}
	return (min);
}

t_cell	get_minimal_cell(t_cell **cells, int min)
{
	int i;
	int j;

	i = 0;
	while (i < SIDE_LENGTH)
	{
		j = 0;
		while (j < SIDE_LENGTH)
		{
			if (cells[i][j].posibs == min)
			{
				return (cells[i][j]);
			}
			j++;
		}
		i++;
	}
	return (cells[0][0]);
}
