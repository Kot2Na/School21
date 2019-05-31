/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goliyo.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 20:31:33 by crycherd          #+#    #+#             */
/*   Updated: 2019/02/11 19:40:14 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GOLIYO_H
# define GOLIYO_H

# include "structs.h"

void	goliyo(t_cell **cells);
void	gol_str(t_cell **cells);
void	gol_stl(t_cell **cells);
void	sort_ar(int *a);
void	rm_dig(t_cell *where_del, int *to_delete);
void	rm_rep_stl(t_cell **cell, int row_a, int row_b, int col);
void	rm_rep_str(t_cell **cell, int col_a, int col_b, int row);
void	square(t_cell **cells);
void	inside_sq(t_cell **cells, t_cell cell, int st_col, int st_row);
int		check_cell(t_cell cell_a, t_cell cell_b);

#endif
