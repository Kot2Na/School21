/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libraries.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 15:21:02 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/10 16:40:34 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARIES_H
# define LIBRARIES_H

# include <unistd.h>
# include "structs.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		get_result(t_cell cell);
void	sort_choices(t_cell **cells);

#endif
