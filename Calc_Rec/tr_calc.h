/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tr_calc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 17:21:29 by crycherd          #+#    #+#             */
/*   Updated: 2019/02/17 23:37:01 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TR_CALC_H
# define TR_CALC_H

# include <stdlib.h>
# include <unistd.h>

int solve_con(char *str);
int solve(char *str);
int ft_atoi(char *str);
void ft_union(char *str, char *buf, char *end);
void ft_itoa(int value, char *s);
int eval_expr(char *str);
char *ft_chrrsk(char *p);
char *ft_strchr(char *p, char item);
char *ft_strrchr(char *p, char item);

#endif
