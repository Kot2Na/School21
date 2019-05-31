/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_for_clc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:32:24 by crycherd          #+#    #+#             */
/*   Updated: 2019/05/31 20:23:28 by crycherd         ###   ########.fr       */
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
