/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 17:43:25 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/10 14:57:23 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILTER_H
# define FILTER_H

# include "structs.h"
# include "libraries.h"

void	delete_choice(t_cell *cell, int choice);
void	check_box(int cell_x, int cell_y, t_cell **cells);
void	check_row(int cell_x, int cell_y, t_cell **cells);
void	check_col(int cell_x, int cell_y, t_cell **cells);
void	filter(t_cell **cells);

#endif
