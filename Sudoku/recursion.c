/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 15:48:02 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/10 20:13:11 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "recursion.h"
#include "filter.h"
#include "goliyo.h"
#include "output.h"
#include "recursion_utilities.h"

int		sudoku(t_cell **cells)
{
	int		i;
	t_cell	**copy;
	int		result;
	t_cell	min;

	sieve(cells);
	result = validate(cells);
	if (result == RESULT_FAIL)
		return (result);
	if (result == RESULT_DONE)
	{
		print_cells(cells);
		return (result);
	}
	min = get_minimal_cell(cells, get_mininal_posibs_cell(cells));
	i = 0;
	while (i < min.posibs)
	{
		copy = create_copy(cells);
		if (select_next(copy, min, i) && sudoku(copy))
			return (1);
		free_cells(copy);
		i++;
	}
	return (0);
}

int		validate(t_cell **cells)
{
	int	i;
	int	j;
	int result;

	result = RESULT_DONE;
	i = 0;
	while (i < SIDE_LENGTH)
	{
		j = 0;
		while (j < SIDE_LENGTH)
		{
			if (cells[i][j].posibs == 0)
				return (RESULT_FAIL);
			if (cells[i][j].posibs != 1)
			{
				result = RESULT_OK;
			}
			j++;
		}
		i++;
	}
	return (result);
}

void	sieve(t_cell **cells)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		filter(cells);
		square(cells);
		sort_choices(cells);
		goliyo(cells);
		i++;
	}
}

t_cell	**create_copy(t_cell **cells)
{
	t_cell	**copy;
	int		i;
	int		j;

	copy = (t_cell**)malloc(sizeof(t_cell*) * (SIDE_LENGTH + 1));
	copy[SIDE_LENGTH] = 0;
	i = 0;
	while (i < SIDE_LENGTH)
	{
		copy[i] = (t_cell*)malloc(sizeof(t_cell) * (SIDE_LENGTH + 1));
		j = 0;
		while (j < SIDE_LENGTH)
		{
			copy[i][j] = cells[i][j];
			j++;
		}
		i++;
	}
	return (copy);
}

void	free_cells(t_cell **cells)
{
	int i;

	i = 0;
	while (cells[i])
	{
		free(cells[i]);
		i++;
	}
	free(cells);
}
