/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_for_clc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:32:24 by crycherd          #+#    #+#             */
/*   Updated: 2019/02/17 23:19:20 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tr_calc.h"

char *ft_chrrsk(char *p)
{
	int i;
	int nbr;

	nbr = 0;
	if (p)
	{
		i = 0;
		while(p[i])
		{
			if (p[i] == '(')
				nbr++;
			if (p[i] == ')')
				nbr--;
			if (nbr == 0)
				return (p + i);
			i++;
		}
	}
	return (NULL);
}

char *ft_strchr(char *p, char item)
{
	if (p)
		while(*p && *p != item)
			p++;
	if (*p == '\0')
		return (NULL);
	return (p);
}

char *ft_strrchr(char *p, char item)
{
	int i;

	if (p)
	{
		i = 0;
		while(p[i])
			i++;
		while(i > 0 && p[i - 1] != item)
			i--;
	}
	if (i == 0)
		return (NULL);
	return (p + i - 1);
}
