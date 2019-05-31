/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 16:34:18 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/10 20:00:24 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECURSION_H
# define RECURSION_H

# include "structs.h"

int		validate(t_cell **cells);
int		sudoku(t_cell **cells);
void	sieve(t_cell **cells);
t_cell	**create_copy(t_cell **cells);
void	free_cells(t_cell **cells);

#endif
