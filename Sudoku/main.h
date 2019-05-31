/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 14:49:32 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/12 13:09:20 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <stdlib.h>
# include "structs.h"
# include "libraries.h"
# include "recursion.h"

t_cell			**init_cells(char **argv);
t_cell			init_cell(char digit, int y, int x);

#endif
