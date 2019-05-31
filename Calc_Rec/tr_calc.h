/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tr_calc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 17:21:29 by crycherd          #+#    #+#             */
/*   Updated: 2019/05/31 20:23:06 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TR_CALC_H
# define TR_CALC_H

int		solve_con(char *str);
int		solve(char *str);
void	ft_union(char *str, char *buf, char *end);
int		eval_expr(char *str);
char	*ft_chrrsk(char *p);

#endif
