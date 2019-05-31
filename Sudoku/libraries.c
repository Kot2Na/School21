/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libraries.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 15:20:44 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/10 16:40:16 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"
#include "goliyo.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		get_result(t_cell cell)
{
	int i;

	i = 0;
	while (i < SIDE_LENGTH)
	{
		if (cell.choices[i] != 0)
			return (cell.choices[i]);
		i++;
	}
	return (0);
}

void	sort_choices(t_cell **cells)
{
	int i;
	int q;

	i = 0;
	while (i < SIDE_LENGTH)
	{
		q = 0;
		while (q < SIDE_LENGTH)
		{
			sort_ar(cells[i][q].choices);
			q++;
		}
		i++;
	}
}
