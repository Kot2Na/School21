/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 14:46:48 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/12 20:26:36 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		is_input_invalid(int argc, char **argv)
{
	int i;
	int j;

	if (argc != SIDE_LENGTH + 1)
		return (1);
	i = 1;
	while (i < SIDE_LENGTH + 1)
	{
		if (ft_strlen(argv[i]) != SIDE_LENGTH)
			return (1);
		j = 0;
		while (j < SIDE_LENGTH)
		{
			if (argv[i][j] != '.' && (argv[i][j] < '0' || argv[i][j] > '9'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

t_cell	**init_cells(char **argv)
{
	t_cell	**cells;
	int		i;
	int		j;

	cells = (t_cell**)malloc(sizeof(t_cell*) * (SIDE_LENGTH + 1));
	cells[SIDE_LENGTH] = 0;
	i = 0;
	while (i < SIDE_LENGTH)
	{
		cells[i] = (t_cell*)malloc(sizeof(t_cell) * (SIDE_LENGTH + 1));
		j = 0;
		while (j < SIDE_LENGTH)
		{
			cells[i][j] = init_cell(argv[i + 1][j], i, j);
			j++;
		}
		i++;
	}
	return (cells);
}

t_cell	init_cell(char digit, int y, int x)
{
	t_cell	default_cell;
	int		i;

	default_cell.y = y;
	default_cell.x = x;
	if (digit != '.')
	{
		default_cell.choices[0] = digit - 48;
		default_cell.posibs = 1;
		i = 1;
		while (i < SIDE_LENGTH)
		{
			default_cell.choices[i] = 0;
			i++;
		}
		return (default_cell);
	}
	i = 0;
	while (i < SIDE_LENGTH)
	{
		default_cell.choices[i] = i + 1;
		i++;
	}
	default_cell.posibs = 9;
	return (default_cell);
}

int		main(int argc, char **argv)
{
	t_cell	**cells;
	int		i;

	i = 0;
	if (is_input_invalid(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	cells = init_cells(argv);
	if (!sudoku(cells))
	{
		ft_putstr("Error\n");
	}
	return (0);
}
