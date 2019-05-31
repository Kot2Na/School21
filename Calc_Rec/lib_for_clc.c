/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_for_clc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:32:24 by crycherd          #+#    #+#             */
/*   Updated: 2019/05/31 21:50:43 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tr_calc.h"
#include "libft.h"

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

char	*ft_strrinus(const char *p, int item)
{
	int i;

	i = 0;

	if (p)
	{
		while (p[i])
			i++;
		if (i > 0)
			i--;
		while (i > 0 && p[i] != item && p[i + 1] != ' ')
			i--;
	}
	if (i <= 0 && p[i] != item)
		return (NULL);
	return ((char *)p + i);
}
