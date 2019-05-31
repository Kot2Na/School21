/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion_utilities.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 19:47:32 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/10 19:47:34 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECURSION_UTILITIES_H
# define RECURSION_UTILITIES_H

# include "structs.h"

int		select_next(t_cell **cells, t_cell min, int skip);
int		check_skip_in_cell(t_cell *cell, int *skipper, int skip);
void	remove_others(t_cell *cell, int save);
int		get_mininal_posibs_cell(t_cell **cells);
t_cell	get_minimal_cell(t_cell **cells, int min);

#endif
