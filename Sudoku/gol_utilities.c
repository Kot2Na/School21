/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gol_utilities.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 21:17:25 by crycherd          #+#    #+#             */
/*   Updated: 2019/02/11 15:02:02 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

int		check_cell(t_cell cell_a, t_cell cell_b)
{
	int i;
	int *a;
	int *b;

	a = cell_a.choices;
	b = cell_b.choices;
	i = 0;
	while (i < 9 && a[i] == b[i] && a[i] && b[i])
		i++;
	if (i == 2 && a[i] == b[i])
		return (1);
	return (0);
}

void	sort_ar(int *a)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 1;
		while (j < 9)
		{
			if (a[j - 1] == 0 && a[j] != 0)
			{
				a[j - 1] = a[j];
				a[j] = 0;
			}
			j++;
		}
		i++;
	}
}

void	rm_dig(t_cell *where_del, int *to_delete)
{
	int i;
	int j;

	i = 0;
	sort_ar((*where_del).choices);
	sort_ar(to_delete);
	while (i < 9 && to_delete[i])
	{
		j = 0;
		while (j < 9)
		{
			if ((*where_del).choices[j] == to_delete[i])
			{
				(*where_del).posibs--;
				(*where_del).choices[j] = 0;
			}
			j++;
		}
		i++;
	}
	sort_ar((*where_del).choices);
}

void	rm_rep_stl(t_cell **cells, int row_a, int row_b, int col)
{
	int n;
	int *arr;

	arr = cells[row_a][col].choices;
	n = 0;
	while (n < 9)
	{
		if (n != row_a && n != row_b)
			rm_dig(&cells[n][col], arr);
		n++;
	}
}

void	rm_rep_str(t_cell **cells, int col_a, int col_b, int row)
{
	int n;
	int *arr;

	arr = cells[row][col_a].choices;
	n = 0;
	while (n < 9)
	{
		if (n != col_a && n != col_b)
			rm_dig(&cells[row][n], arr);
		n++;
	}
}
