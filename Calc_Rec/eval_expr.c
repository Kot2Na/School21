/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:21:45 by crycherd          #+#    #+#             */
/*   Updated: 2019/05/31 20:20:09 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tr_calc.h"
#include "libft.h"

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
	char *buf;

	md = ft_strchr(str, '(');
	end = ft_chrrsk(md);
	if (md != NULL && end != NULL)
	{
		*end = '\0';
		*md = '\0';
		buf = ft_itoa(eval_expr(md + 1));
		ft_union(str, buf, end + 1);
		free(buf);
		return (eval_expr(str));
	}
	return (solve(str));
}
