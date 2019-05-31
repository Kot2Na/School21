/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:21:45 by crycherd          #+#    #+#             */
/*   Updated: 2019/02/17 23:35:39 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tr_calc.h"

int	solve_con(char *str)
{
	char *p;
	
	if ((p = ft_strrchr(str, '/')) != NULL)
	{
		*p = '\0';
		return (solve(str) / solve(p + 1));
	}
	if ((p = ft_strrchr(str, '%')) != NULL)
	{
		*p = '\0';
		return (solve(str) % solve(p + 1));
	}
	return (ft_atoi(str));
}

int solve(char *str)
{
	char *p;

	if ((p = ft_strrchr(str, '+')) != NULL)
	{
		*p = '\0';
		return (solve(str) + solve(p + 1));
	}
	if ((p = ft_strrchr(str, '-')) != NULL && *(p + 1) == ' ')
	{
		*p = '\0';
		return (solve(str) - solve(p + 1));
	}
	if ((p = ft_strrchr(str, '*')) != NULL)
	{
		*p = '\0';
		return (solve(str) * solve(p + 1));
	}
	return(solve_con(str));
}

void ft_union(char *str, char *buf, char *end)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while ((buf[j] && buf[j] >= '0' && buf[j] <= '9') || buf[j] == '-')
	{
		str[i] = buf[j];
		i++;
		j++;
	}
	j = 0;
	while (end[j])
	{
		str[i + j] = end[j];
		j++;
	}
	str[i + j] = '\0';
}

int eval_expr(char *str)
{
	char *md;
	char *end;
	char buf[20];

	md = ft_strchr(str, '(');
	end = ft_chrrsk(md);
	if (md != NULL && end != NULL)
	{
		printf("B");
		*end = '\0';
		*md = '\0';
		ft_itoa(eval_expr(md + 1), buf);
		ft_union(str, buf, end + 1);
		return (eval_expr(str));
	}
	return (solve(str));
}
